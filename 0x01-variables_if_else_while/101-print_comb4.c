#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	int i, j, k, ok;


	ok = 0;
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (j <= i)
				continue;

			for (k = 0 ; k <= 9 ; k++)
			{
				if (k <= j)
					continue;

				if (ok)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				ok = 1;
			}
		}
	}
	putchar('\n');
	return (0);
}
