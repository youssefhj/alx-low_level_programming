#include "main.h"

/**
 * main - Entry point
 * @argc: len of arguments
 * @argv: array of arguments
 */
void main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0' ; i++)
		_putchar(argv[0][i]);

	_putchar('\n');
}
