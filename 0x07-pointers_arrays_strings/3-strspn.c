#include "main.h"

/**
 * _strspn - count the caracter on s that not exist in accept
 * @s: string
 * @accept: string
 * Return: number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0 ; s[i] != 0 ; i++)
		if (s[i] == accept[0])
			return (i + 1);

	return (0);
}
