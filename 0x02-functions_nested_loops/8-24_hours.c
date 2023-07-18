#include "main.h"

/**
 * jack_bauer - print from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0 ; i <= 23 ; i++)
	{
		for (j = 0 ; j <= 59 ; j++)
		{
			if (i <= 9)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				k = i % 10;
				l = i - k;
				l = l % 10;

				_putchar(l);
				_putchar(k);
			}
			_putchar(':');
		
			if (j <= 9)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				k = j % 10;
				l = j - k;
				l = l % 10;

				_putchar(l);
				_putchar(k);
			}
			_putchar('\n');
		}
	}
}
