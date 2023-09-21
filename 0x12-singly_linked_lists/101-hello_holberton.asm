section .data
    hello db "Hello, Holberton", 0

section .text
    extern printf

global main
main:
    push rbp
    mov rdi, hello
    xor rax, rax
    call printf
    pop rbp
    ret
