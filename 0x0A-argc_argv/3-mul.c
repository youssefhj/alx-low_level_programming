#include <stdio.h>

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
		fprintf(stderr, "Error\n");
		return (1);
	}

	return (argv[1] * argv[2]);
}
