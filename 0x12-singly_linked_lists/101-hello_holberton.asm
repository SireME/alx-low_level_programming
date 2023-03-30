section .data
  hello db 'Hello, Holberton', 0Ah, 0

section .text
  global main
  extern printf

  main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello]
    mov al, 0
    call printf

    mov eax, 0
    pop rbp
    ret
