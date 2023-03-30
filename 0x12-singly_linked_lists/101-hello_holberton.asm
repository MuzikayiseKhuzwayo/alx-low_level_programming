global main

section .text

main:
	mov		rax, 1		;
	mov 	rdi, 1		;
	mov		rsi, output	;
	mov		rdx, 17		;
	syscall				;

	mov		rax, 60		;
	mov		rdi, 0		;
	syscall				;

section .rodata
	output: db "Hello, Holberton", 10, 0
