#include "main.h"

/**
 * print_num_rec - print number recursive
 * @n: input
 */
void print_num_rec(int n)
{
	if (n != 0)
	{
		print_num_rec(n / 10);
		_putchar((n % 10) + '0');
	}
}

/**
 * print_array - display the n element of a
 * @a: pointer to array of int
 * @n: size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (a[i] < 0)
		{
			_putchar('-');
			a[i] *= -1;
		}

		print_num_rec(a[i]);

		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

}
