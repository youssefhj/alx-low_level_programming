#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: input caracter
 * Return: 1 if c is ipper otherwize 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
