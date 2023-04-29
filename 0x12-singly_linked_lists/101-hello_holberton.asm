section .data
    message db "Hello, Holberton", 10, 0 ; the message to print followed by a newline character

section .text
    global main

    extern printf

main:
    push message     ; push the address of the message onto the stack
    call printf      ; call printf, which will print the message to the console
    add rsp, 8       ; clean up the stack
    mov eax, 0       ; set the return value of the program to 0
    ret              ; exit the program
