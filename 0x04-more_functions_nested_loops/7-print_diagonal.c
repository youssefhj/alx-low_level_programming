#include "main.h"

/**
 * print_diagonal - print n \
 * @n: input
 */
void print_diagonal(int n)
{
	int i, j;

	if(n < 0)
	{
		_putchar('\n');
		return;
	}	
	
	j = 0;
	while (j < n)
	{
		i = j;
		while (i)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

}
