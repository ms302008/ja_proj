; Filtr czarno-bia³y
; Micha³ Suchan
; 
; ver 0.1.2 (12.11.23) - proby dostepu do tablicy pikseli
;
; ver 0.1.1 (28.10.23) - zalazek wlasciwej funkcji
;
; ver 0.1 (11.10.23) - dodanie dll do projektu, test dynamicznego ladowania
;


.code
MyProc11 proc ;test
add RCX, RDX
mov RAX, RCX
ret
MyProc11 endp


to_grayscale proc ptro:QWORD
;SUB ESP, 32
;mov RAX, 1 ;rozpocznij ladujac 1 (blad) do rejestru zrotnego (zamien na 0 na koncu procedury)
xor rax, rax
mov al, BYTE PTR [rcx]

;mov RAX, ptro[1]
;nop
;mov RDX, ile
;mov RCX, 0
;mov R8, BYTE PTR[RBX+RCX]

ret
;mov RAX, 0 ;kod poprawnego wykonania
;ADD ESP, 32
to_grayscale endp


end