#include <stdio.h>

/**
 * main - Entry point
 */

void main(void)
{
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if(i % 5 == 0)
			printf("Buzz");
	}

}
