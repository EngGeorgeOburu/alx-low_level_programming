global main
extern printf

section .text

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx. 13
	syscall ;

	mov rax, 60;
	mov rdi,
	syscall,

section .data

message: db "Hello, Holberton\n"
