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
	int ok = 0;

	while (size)
	{
		if ((n >> size) & 1L)
		{
			_putchar('1');
			ok = 1;
		}
		else if (ok != 0)
			_putchar('0');

		size--;
	}
}
