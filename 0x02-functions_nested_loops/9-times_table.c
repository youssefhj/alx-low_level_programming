#include "main.h"

/**
 * times_table - times table
 */

void times_table(void)
{
	int i, j, p, t, k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			p = i * j;
		       if (p >= 10)
		       {	
				k = k % 10;
				t = p - k;
				t = t / 10;

				_putchar(t + '0');
			}
			_putchar(p + '0');
			if (j != 9)
			{
				_putchar(',');
				if ( p >= 10)
					_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
		}	
		_putchar('\n');
	}

}
