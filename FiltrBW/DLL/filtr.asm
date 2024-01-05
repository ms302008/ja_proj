; Filtr czarno-bia³y
; Micha³ Suchan
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
;arg1 - wskaznik na poczatek obrazu (rcx)
;arg2 - ilosc pikseli do pominiecia (skad zaczac) (rdx)
;arg3 - ilosc pikseli do obrobki (r8)
;
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

main_loop:
cmp r8, 0
je finish

mov bl, BYTE PTR [rcx] ;pobierz 1szy bajt (b)
cvtsi2ss xmm1, ebx ;skonwertuj go do float na najnizsze 32bity xmm1
pslldq xmm1, 4 ;przesun xmm1 o 4 bajty w lewo

mov bl, BYTE PTR [rcx+1] ;pobierz 2gi bajt (g)
cvtsi2ss xmm1, ebx ;skonwertuj go do float na najnizsze 32bity xmm1
pslldq xmm1, 4 ;przesun xmm1 o 4 bajty w lewo

mov bl, BYTE PTR [rcx+2] ;pobierz 3ci bajt (r)
cvtsi2ss xmm1, ebx ;skonwertuj go do float na najnizsze 32bity xmm1

mulps xmm1, xmm0 ;pomnoz powstale wektory
movaps xmm2, xmm1 ;kopiuj zawartosc
psrldq xmm2, 8 ;przesun zeby dodac b i r
addss xmm2, xmm1 ;dodaj najnizej stojace wartosci (zapis jako double)
psrldq xmm1, 4 ;przesun xmm1 o 4 bajty w prawo zeby dodac g
addss xmm2, xmm1 ;dodaj najnizej stojace wartosci (zapis jako double)
cvtss2si r10d, xmm2 ;konwersja na int

mov byte ptr [rcx], r10b ;zaladuj nowa wartosc pod b
mov byte ptr [rcx+1], r10b ;zaladuj nowa wartosc pod g
mov byte ptr [rcx+2], r10b ;zaladuj nowa wartosc pod r
dec r8
add rcx, 4
jmp main_loop

finish:
mov RAX, 0 ;kod poprawnego wykonania
ret

to_grayscale endp

end