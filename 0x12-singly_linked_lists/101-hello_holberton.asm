section .data
	message db "Hello, Holberton", 10, 0  ; Declare the string with a nline

section .text
	extern printf

	global main

main:
	; Prepare the arguments for printf
	mov rdi, message     ; First arg is passed in rdi
	xor rax, rax         ; Clear indicates num of vector registers used

	; Call printf
	call printf

	; Exit
	mov rax, 60          ; syscall: exit
	xor rdi, rdi         ; status: 0
	syscall
