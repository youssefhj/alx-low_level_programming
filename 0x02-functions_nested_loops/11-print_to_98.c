#include "main.h"

void print_to_98(int n)
{
	int i, k, l;

	for (i = n ; i <= 98 ; i++)
	{
		if(i < 98)
		{
			k = i;
			if( i > 10)
			{
				k = i % 10;
				l = i - k;
				l = l / 10;

				_putchar(l + '0');
			}

			_putchar(k + '0');
			_putchar(',');
			_putchar(' ')
		}
	}

}
