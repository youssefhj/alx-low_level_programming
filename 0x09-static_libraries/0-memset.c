#include "main.h"


/**
 * _memset - fill s with n byte from b
 * @s: string
 * @b: caracter
 * @n: n byte
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;

	return (s);
}
