#include "main.h"

/**
 * times_table - times table
 */

void times_table(void)
{
	int i, j, p, t;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			p = i * j;
		       if (p >= 10)
		       {	
				p = p % 10;
				t = t - p;
				t = t / 10;

				_putchar(t + '0');
			}
			_putchar(p + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}	
		_putchar('\n');
	}

}
