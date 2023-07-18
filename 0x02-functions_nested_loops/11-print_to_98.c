#include "main.h"

void print_to_98(int n)
{
	int i, k, l;

	for (i = n ; i <= 98 ; i++)
	{
		k = i;
		if( i < -9 || i > 9)
		{
			if(i < 0)
				k *= -1;
				
			k = k % 10;
			l = i - k;
			l = l / 10;

			_putchar(l + '0');
		}
		_putchar(k + '0');
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

}
