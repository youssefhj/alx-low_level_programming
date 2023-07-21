#include "main.h"

/**
 * print_square - print hashtag n times
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

	for (s = 1 ; s <= size ; s++)
		for (l = 1 ; l <= size ; l++)
			_putchar('#');

	_putchar('\n');
}
