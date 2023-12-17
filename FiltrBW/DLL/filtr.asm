; Filtr czarno-bia³y
; Micha³ Suchan
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
BGR dd 0.0, 0.11, 0.59, 0.3 ;0x3de147ae, 0x3f170a3d, 0x3e99999a ;wagi: 0.11 (B), 0.59 (G), 0.3 (R)


;funkcja testujaca poprawnosc dynamicznego ladowania
.code
MyProc11 proc
add RCX, RDX
mov RAX, RCX
ret
MyProc11 endp


;Fukcja przeksztalcajaca fragment obrazu w czarno-bialy.
;
;arg1 - wskaznik na poczatek obrazu (rcx)
;arg2 - ilosc pikseli do pominiecia (skad zaczac) (rdx)
;arg3 - ilosc pikseli do obrobki (r8)
;
to_grayscale proc ptro:QWORD
;mov RAX, 1 ;rozpocznij ladujac 1 (blad) do rejestru zrotnego (zamien na 0 na koncu procedury)
xor rax, rax
vpxor xmm0, xmm0, xmm0
vpxor xmm1, xmm1, xmm1
movss xmm1, BGR

mov al, BYTE PTR [rcx] ;pobierz 1szy piksel (b)
cvtsi2ss xmm0, eax ;skonwertuj go do float na najnizsze 32bity xmm0
pslldq xmm0, 4 ;przesun xmm0 o 4 bajty w lewo

mov al, BYTE PTR [rcx+1] ;pobierz 2gi piksel (g)
cvtsi2ss xmm0, eax ;skonwertuj go do float na najnizsze 32bity xmm0
pslldq xmm0, 4 ;przesun xmm0 o 4 bajty w lewo

mov al, BYTE PTR [rcx+2] ;pobierz 3ci piksel (r)
cvtsi2ss xmm0, eax ;skonwertuj go do float na najnizsze 32bity xmm0



ret
;mov RAX, 0 ;kod poprawnego wykonania
to_grayscale endp


end