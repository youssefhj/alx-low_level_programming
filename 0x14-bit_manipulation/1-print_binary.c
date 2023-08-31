#include "main.h"

/**
 * print_binary - print binary representation
 * @n: large number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int binary = sizeof(n) * 8;
	int can_print = 0;

	while (binary)
	{
		if (n & 1L << --binary)
		{
			_putchar('1');
			can_print = 1;
		}
		else if (can_print)
			_putchar('0');
	}
}
