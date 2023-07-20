#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: input caracter
 * Return: 1 if c is a digit otherwize 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
