; Filtr czarno-bia³y
; Micha³ Suchan
; 
; ver 0.1 (11.10.23) - dodanie dll do projektu, test dynamicznego ladowania
;


.code
MyProc11 proc ;test
add RCX, RDX
mov RAX, RCX
ret
MyProc11 endp

grayscale proc 
mov RAX, 1 ;rozpocznij ladujac 1 (blad) do rejestru zrotnego (zamien na 0 na koncu procedury)

mov RAX, 0 ;kod poprawnego wykonania
grayscale endp


end