#include "main.h"

/**
 * print_binary - print n in binary format
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int size = 8 * sizeof(unsigned long int);

	while (size)
	{
		if ((n >> size) & 1L)
			_putchar('1');
		else
			_putchar('0');

		size--;
	}
}
