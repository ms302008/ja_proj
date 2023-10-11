.code
MyProc1 proc x: QWORD, y: QWORD

xor rax, rax ; RAX = 0
ror rcx,1 ; shift rcx right by 1
shld rcx,rcx,2 ; set flags registry
jnc ET1
mul y
ret ; return z in RAX register
ET1: mul x
neg y
ret ; return z in RAX register

MyProc1 endp
end