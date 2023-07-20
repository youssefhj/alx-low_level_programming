#include "main.h"

/**
 * print_square - print # n times
 * @size: input
 */
void print_square(int size)
{
	int s;

	s = size * size;
	while (s > 0)
	{
		if (s == size)
			_putchar('\n');

		_putchar('#');
		s--;
	}

	_putchar('\n');


}
