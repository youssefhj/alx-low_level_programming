section		.text
	extern	printf
	global main

main:
	mov		edi, m
	mov		eax, 0
	call	printf

section		.data
	m db 'Hello, Holberton', 0xa, 0
