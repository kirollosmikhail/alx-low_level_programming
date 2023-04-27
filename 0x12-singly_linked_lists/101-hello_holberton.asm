extern printf

section .text
   global main

main:
   push rbp

   mov rdi,frmt
   mov rsi,text
   mov rax,0
   call printf

   pop rbp

   mov rax,0
   ret

section .data
   text: db "Hello, Holberton", 0
   frmt: db "%s", 10, 0
