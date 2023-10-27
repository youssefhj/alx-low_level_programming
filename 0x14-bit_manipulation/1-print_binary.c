#include "main.h"

/**
 * print_binary - print binary representation of number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, ok;

	ok = 0;
	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			ok = 1;
		}
		else if (ok)
			_putchar('0');
	}
	if (ok == 0)
		_putchar('0');
}
