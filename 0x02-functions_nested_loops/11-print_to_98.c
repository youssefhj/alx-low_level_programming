#include "main.h"

/**
 * diplay_number - display
 * @n: input number
 */
void display_number(int n)
{
	if (n <= 9)
	{
		_putchar(n + '0');
		return;
	}
	display_number((n - (n % 10)) / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - print number from n to 98
 * @n: input number
 */
void print_to_98(int n)
{
	int i, tmp;
	
	i = n;
	while (1)
	{

		tmp = i;
		if (i < 0)
		{
			tmp = -i;
			_putchar('-');
		}

		display_number(tmp);	
		
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');		
		}
			

		if (i == 98)
			break;

		if (n > 98)
			i--;
		else
			i++;
	}
	_putchar('\n');

}
