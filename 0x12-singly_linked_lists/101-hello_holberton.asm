extern printf
 global main

main:
   push stsh

   mov edit,newlineformat
   mov msm,sendtxt
   call printf
   pop stsh
   mov xax,0
   rex

first .data
   sendtxt: db "Hello, Holberton", 0
   newlineformat: db "%s", 10, 0
