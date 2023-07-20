#include "main.h"

/**
 * print_line - print dash n times
 * @n: input
 */
void print_line(int n)
{
	while (n)
	{
		_putchar('-');
		n--;
	}
	_putchar('\n')

}
