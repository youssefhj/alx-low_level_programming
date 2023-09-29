#include "main.h"

/**
 * power - calculate the power
 * @b: base
 * @e: exposant
 *
 * Return: b ^ e
 */
unsigned int power(unsigned int b, unsigned int e)
{
	if (e == 0)
		return (1);

	return (b * power(b, e - 1));
}

/**
 * is_binary - testing of binary number
 * @b: binary number
 *
 * Return: 0 failed 1 success
 */
int is_binary(char *b)
{
	int c;

	for (c = 0 ; b[c] != '\0' ; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}

	return (1);
}

/**
 * binary_to_uint - convert binary number to an int
 * @b: binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nb, puissance;
	int c;

	if (b == NULL || is_binary(b) == 0)
		return (0);

	for (c = 0; b[c] != '\0' ; c++)
		;

	nb = puissance = 0;
	for (c = c - 1 ; c >= 0 ; c--)
	{
		if (b[c] == '1')
			nb = nb + power(2, puissance);

		puissance++;
	}

	return (nb);
}
