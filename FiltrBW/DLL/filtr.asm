; Filtr czarno-bia³y
; Micha³ Suchan
; Jezyki Asemblerowe sem 5, gr 5
; 
; Zalozenia: przeksztalcenie obrazu wejsciowego w czarno bialy korzystajac z metody oswietleniowej/lumy (luminosity method).
; Konwersja przyporzadkowuje kolorom RGB wagi zalezne od wrazliwosci ludzkiego oka na dany kolor: 0.3 czerwonemu, 0.59 zielonemu
; i 0.11 niebieskiemu, po czym dodaje otrzymane wartosci.
;
; ver 1.1 (14.01.23) - dodano sprawdzenie wartosci koncowych (przedzial 0-255), rozwiniecie komentarza poczatkowego i przedzialy argumentow
;
; ver 1.0 (29.12.23) - rozpakowanie, zapisanie do pamieci, petle sterujace
;
; ver 0.4 (28.12.23) - spakowanie wag, mnozenie, rozpakowanie?
;
; ver 0.3 (17.12.23)  - spakowanie pikseli do rejestru xmm, przygotowanie wag
;
; ver 0.2 (4.12.23) - dodano komentarz, iteracja po pikselach
;
; ver 0.1.2 (12.11.23) - proby dostepu do tablicy pikseli
;
; ver 0.1.1 (28.10.23) - zalazek wlasciwej funkcji
;
; ver 0.1 (11.10.23) - dodanie dll do projektu, test dynamicznego ladowania
;

.data
BGR dd 0.3, 0.59, 0.11 ; 0x3e99999a, 0x3f170a3d, 0x3de147ae ;wagi:  0.3 (R), 0.59 (G), 0.11 (B),


;funkcja testujaca poprawnosc dynamicznego ladowania
.code
MyProc11 proc
add RCX, RDX
mov RAX, RCX
ret
MyProc11 endp


;Funkcja przeksztalcajaca fragment obrazu w czarno-bialy.
;
;Funkcja korzysta z rejestrow rax, rbx, rcx, rdx, r8, r10, xmm0, xmm1, xmm2
;
;wejscie:
;arg1 - wskaznik na poczatek obrazu (rcx); przedzial wartosci: wszystkie wartosci mozliwe do zapisania na 64 bitach
;arg2 - ilosc pikseli do pominiecia (skad zaczac) (rdx); przedzial wartosci: -2,147,483,648 do 2,147,483,647 (4 bajty)
;arg3 - ilosc pikseli do obrobki (r8); przedzial wartosci: -2,147,483,648 do 2,147,483,647 (4 bajty)
;
;wyjscie:
;rax - 1 jesli bledne wykonanie, 0 jesli prawidlowe
to_grayscale proc
xor rax, rax
xor rbx, rbx
xor r10, r10
vpxor xmm0, xmm0, xmm0
vpxor xmm1, xmm1, xmm1
vpxor xmm2, xmm2, xmm2 ;wyczysc uzywane rejestry

mov RAX, 1 ;rozpocznij ladujac 1 (blad) do rejestru zrotnego (zamien na 0 na koncu procedury)

movss xmm0, BGR ;zaladuj wage r
pinsrd xmm0, BGR+4, 1 ;zaladuj wage g
pinsrd xmm0, BGR+8, 2 ;zaladuj wage b

;przesun na poczatek obslugiwanego fragmentu
skip_pixels:
cmp rdx, 0 ; sprawdz czy jest na dobrym pikselu
je main_loop ;jesli tak, skocz dalej
add rcx, 4 ;jesli nie, przesun wskaznik
dec rdx ;dekrementuj licznik
jmp skip_pixels ;powtorz petle

;mov rax, rdx ;nie mozna, traktujemy rax jako nietykalny
;mul 4 ;pomnoz ilosc pikseli do pominiecia przez zajmowane miejsce (4 bajty)
;add rcx, rax ;ustaw wskaznik na wlasciwe miejsce rozpoczecia

main_loop:
cmp r8, 0 ;sprawdz czy obsluzono juz wszystkie piksele
je finish ;jesli tak to skocz na koniec

mov bl, BYTE PTR [rcx] ;pobierz 1szy bajt (b)
cvtsi2ss xmm1, ebx ;skonwertuj go do float na najnizsze 32bity xmm1
pslldq xmm1, 4 ;przesun xmm1 o 4 bajty w lewo

mov bl, BYTE PTR [rcx+1] ;pobierz 2gi bajt (g)
cvtsi2ss xmm1, ebx ;skonwertuj go do float na najnizsze 32bity xmm1
pslldq xmm1, 4 ;przesun xmm1 o 4 bajty w lewo

mov bl, BYTE PTR [rcx+2] ;pobierz 3ci bajt (r)
cvtsi2ss xmm1, ebx ;skonwertuj go do float na najnizsze 32bity xmm1

mulps xmm1, xmm0 ;pomnoz powstale wektory
movaps xmm2, xmm1 ;kopiuj rejestr do xmm2
psrldq xmm2, 8 ;przesun kopie zeby dodac b (xmm2) i r (xmm1)
addss xmm2, xmm1 ;dodaj najnizej stojace wartosci
psrldq xmm1, 4 ;przesun xmm1 o 4 bajty w prawo zeby dodac g
addss xmm2, xmm1 ;dodaj najnizej stojace wartosci
cvtss2si r10d, xmm2 ;konwersja na int

cmp r10d, 0 ;sprawdz czy wynik jest mniejszy od 0
ja check_up ;jesli nie, skocz do drugiego warunku
mov r10d, 0 ;jesli tak, zmien na 0
jmp store_res ;i skocz do ladowania bo na pewno nie bedzie wieksze od 255
check_up:
cmp r10d, 255 ;sprawdz, czy wynik jest wiekszy od 255
jb store_res ;jesli nie, przejdz do zapisu
mov r10d, 255 ;jesli tak, zmien na 255

store_res:
mov byte ptr [rcx], r10b ;zaladuj nowa wartosc pod b
mov byte ptr [rcx+1], r10b ;zaladuj nowa wartosc pod g
mov byte ptr [rcx+2], r10b ;zaladuj nowa wartosc pod r
dec r8 ;piksel obsluzony
add rcx, 4 ; przesun na nastepny piksel
jmp main_loop ;skocz na poczatek petli

finish:
mov RAX, 0 ;kod poprawnego wykonania
ret

to_grayscale endp

end