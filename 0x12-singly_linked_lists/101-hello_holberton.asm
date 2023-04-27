section .data
message db "Hello, Holberton", 0Ah ; define message string with newline character

section .text
global main
extern printf

main:
; Call printf with the message string as its argument
; The "%s" format specifier tells printf to print a string
; The "\n" escape sequence tells printf to print a newline character
push message
push format
call printf
add rsp, 16 ; remove arguments from the stack

; Exit the program with a status of 0
mov eax, 0
ret

section .data
format db "%s\n", 0 ; define format string with newline character

