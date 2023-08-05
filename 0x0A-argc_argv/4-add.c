#include <stdio.h>
#include <stdlib.h>

/**
 * check - check if any sumbole on av
 * @ac: number of argument
 * @av: list of argument
 * Return: 0 on success
 */
int check(int ac, char *av[])
{
	int i, j;

	for (i = 1 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				return (1);
			}
		}
	}
	return (0);
}

/**
 * main - Entry point
 * @argc: len of arguments
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int sum, i;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}

	if (check(argc, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}

	sum = 0;
	for (i = 1 ; i < argc ; i++)
		sum += atoi(argv[i]);

	printf("%d\n", sum);
	return (0);
}
