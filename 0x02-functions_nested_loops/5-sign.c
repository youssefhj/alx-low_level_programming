#include "main.h"

/**
 * print_sign - print the sign of n
 * @n: input number
 * Return: 1 (n < 0) ,0 (n = 0) , -1 otherwize 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);

}
