#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 success
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);

		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);

}
