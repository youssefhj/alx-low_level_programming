#include "main.h"

/**
 * jack_bauer - print from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int i, j, k, l, t;

	t = 9;
	for (i = 0 ; i <= 2 ; i++)
	{
		if (i == 2)
			t = 3;

		for (j = 0 ; j <= t ; j++)
		{
			for (k = 0 ; k <= 9 ; k++)
			{
				for (l = 0 ; l <= 9 ; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
