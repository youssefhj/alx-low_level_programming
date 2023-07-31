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
	char *ps;

	for (ps = s ; s != NULL *ps != '\0' && n > 0 ; ps++, n--)
		*ps = b;

	return (s);
}
