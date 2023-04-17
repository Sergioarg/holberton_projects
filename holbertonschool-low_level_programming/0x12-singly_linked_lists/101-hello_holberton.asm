 section .data
fmt     db "Hello, Holberton",10,0
section .text
    extern printf   ; Export of printf
    global main     ; Call to the Main.

main:
    ;mov  rsi, 1     ; Scond paramater
    mov  rdi, fmt   ; rdi first parameter and format
    mov  rax, 0     ; no f.p. args
    call printf     ; Call to Printf.

    ;mov  rbx, 0     ; return value
    ;mov  rax, 0     ; system call number