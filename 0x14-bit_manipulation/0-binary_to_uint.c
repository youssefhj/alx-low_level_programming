#include "main.h"

/**
 * _power - power
 * @b: base
 * @e: exposant
 *
 * Return: b ** e
 */
int _power(int b, int e)
{
	if (e == 0 && b != 0)
		return (1);

	return (b * _power(b, e - 1));
}

/**
 * _strlen - string length
 * @str: string
 *
 * Return: length
 */
unsigned int _strlen(const char *str)
{
	unsigned int len;

	if (str == NULL)
		return (0);

	for (len = 0 ; str[len] != '\0' ; len++)
		;

	return (len);
}
/**
 * binary_to_uint - binary number to +integer
 * @b: binary number
 *
 * Return: +integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, len, c, pow;

	if (!b)
		return (0);

	for (c = 0 ; b[c] != '\0' ; c++)
		if (b[c] != '1' && b[c] != '0')
			return (0);


	len = _strlen(b);
	pow = num = 0;
	while (len--)
	{
		if (b[len] == '1')
			num += _power(2, pow);

		pow++;
	}

	return (num);
}
