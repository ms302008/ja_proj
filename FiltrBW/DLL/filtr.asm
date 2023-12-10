; Filtr czarno-bia³y
; Micha³ Suchan
; 
; ver 0.2 (4.12.23) - dodano komentarz, iteracja po pikselach
;
; ver 0.1.2 (12.11.23) - proby dostepu do tablicy pikseli
;
; ver 0.1.1 (28.10.23) - zalazek wlasciwej funkcji
;
; ver 0.1 (11.10.23) - dodanie dll do projektu, test dynamicznego ladowania
;

;funkcja testujaca poprawnosc dynamicznego ladowania
.code
MyProc11 proc
add RCX, RDX
mov RAX, RCX
ret
MyProc11 endp


;Fukcja przeksztalcajaca fragment obrazu w czarno-bialy.
;
;arg1 - wskaznik na poczatek obrazu
;arg2 - ilosc pikseli do pominiecia (skad zaczac)
;arg3 - ilosc pikseli do obrobki
;
to_grayscale proc ptro:QWORD
;mov RAX, 1 ;rozpocznij ladujac 1 (blad) do rejestru zrotnego (zamien na 0 na koncu procedury)
xor rax, rax
mov al, BYTE PTR [rcx]
mov al, BYTE PTR [rcx+1]
mov al, BYTE PTR [rcx+2]

ret
;mov RAX, 0 ;kod poprawnego wykonania
to_grayscale endp


end