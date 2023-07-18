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
			k = p;
		       if (p >= 10)
		       {	
				k = k % 10;
				t = p - k;
				t = t / 10;
			
				_putchar(t + '0');
			}
			_putchar(k + '0');
			if (j != 9)
			{
				_putchar(',');
				p = i * (j + 1);
				if (p >= 10)
					_putchar(' ');
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
		}	
		_putchar('\n');
	}

}
