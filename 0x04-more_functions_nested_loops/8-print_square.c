#include "main.h"

/**
 * print_square - print # n times
 * @size: input
 */
void print_square(int size)
{
	int s, l;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (s = 1, l = 1 ; s <= size * size ; s++, l++)
	{
		if (l == size && size != 1)
		{
			_putchar('\n');
			l = 1;
		}
		_putchar('#');

	}
	_putchar('\n');

}
