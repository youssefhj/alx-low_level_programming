#include "main.h"

/**
 * _isalpha - check if c is an alphabet
 * @c: input caracter
 * Return: 1 if caracter otherwize 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);

}
