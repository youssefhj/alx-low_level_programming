#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @ac: argument number
 * @av: argument list
 *
 * Return: 0 success
 */
int main(int ac, char *av[])
{
	char *op;
	int n1, n2, result;
	int (*fun)(int, int);

	if (ac < 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(av[1]);
	op = av[2];
	n2 = atoi(av[3]);

	fun = get_op_func(op);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = fun(n1, n2);
	if (result == -1)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result);
	return (0);
}
