.text
.globl my_strlen
.type my_strlen, @function

my_strlen:
    xor %rax, %rax     
.loop:
    cmpb $0, (%rdi, %rax) 
    je .done              
    inc %rax              
    jmp .loop            

.done:
    ret                   
.size my_strlen, .-my_strlen