section		.text
	extern	printf
	global main

main:
	mov		edi, m
	mov		eax, 0
	call	printf

section		.data
	m db 'Heloo, Holberton', 0xa, 0
