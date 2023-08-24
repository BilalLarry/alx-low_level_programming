global main
extern printf

section .data
format db "Hello, Holberton" , 10, 0

section .text
main:
lea rdi, [rel format]
xor eax, eax
call printf
ret
