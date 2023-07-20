#include "main.h"

/**
 * print_diagonal - print n \
 * @n: input
 */
void print_diagonal(int n)
{
	int i;

	while (n > 0)
	{
		i = n;
		while (i)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\');
		n--;
	}
	_putchar('\n');

}
