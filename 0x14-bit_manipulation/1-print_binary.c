#include "main.h"

/**
 * print_binary - print n in binary format
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = 8 * sizeof(unsigned long int);

	while (size)
	{
		if (n & 1L)
			_putchar('1');
		else
			_putchar('0');

		n = n << 1;
		size--;
	}
}
