#include <stdio.h>

/**
 * to_integer - convert nb to integer
 * @nb: string number
 * Return: interger
 */
int to_integer(char *nb)
{
	int integer, p;

	p = 1;
	integer = 0;
	while (nb)
	{
		integer = integer + ((*nb - '\0') * p);
		p *= 10;
		nb++;
	}
	return (integer);
}


/**
 * main - Entry point
 * @argc: len of arguments
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", to_integer(argv[1]) * to_integer(argv[2]));
	return (0);
}
