#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	int i, j, ok;

	ok = 0;
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (j <= i)
				continue;

			if (ok)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
			ok = 1;
		}
	}
	putchar('\n');
	return (0);
}
