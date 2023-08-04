#include <stdio.h>

/**
 * _length - len of nb
 * @nb: string
 * Return: len
 */
int _length(char *nb)
{
	int i, len;

	i = len = 0;
	while (nb[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
/**
 * to_integer - convert nb to integer
 * @nb: string number
 * Return: interger
 */
int to_integer(char *nb)
{
	int integer, p, i;

	p = 1;
	integer = 0;

	i = _length(nb) - 1;
	while (i >= 0)
	{
		if (nb[i] != '-')
			integer = integer + ((nb[i] - '0') * p);
		p *= 10;
		i--;
	}
	if (nb[0] == '-')
		integer *= -1;

	return (integer);
}

/**
 * check - check if any sumbole on av
 * @ac: number of argument
 * @av: list of argument
 * Return: 0 on success
 */
int check(int ac, char *av[])
{
	int i, j;

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '0' ; j++)
		{
			if (av[i][j] < '0' && av[i][j] > '9')
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
		puts("0\n");
		return (0);
	}

	if (check(argc, argv))
	{
		printf("Error\n");
		return (1);
	}

	sum = 0;
	for (i = 0 ; i < argc ; i++)
		sum += to_integer(argv[i]);

	printf("%s\n", sum);
	return (0);
}
