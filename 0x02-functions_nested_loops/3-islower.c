#include "main.h"

/**
 * _islower - check if c is lowercase
 * @c: input caracter
 * Return: 1 if lower otherwie 0
 */

int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
