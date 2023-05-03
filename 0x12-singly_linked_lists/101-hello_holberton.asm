extern printf

section .text

global main

main:
	push ebp
	mov ebp, esp

	push msg
	call printf
	add esp, 4

	leave
	ret

section .data
	msg		db	'Hello, Holberton', 16, 10, 0
