#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	int i, j, k, l, ok;


	ok = 0;
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (j < i)
				continue;
			for (k = 0 ; k <= 9 ; k++)
			{
				if (k < j)
				       	continue;
				for (l = 0 ; l <= 9 ; l++)
				{
					if (l < k || ( l == k ) && (k == j) && (j == i))
						continue;
					if (ok)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					ok = 1;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
