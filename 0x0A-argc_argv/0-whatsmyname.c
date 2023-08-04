#include "main.h"

/**
 * whatsmyname - Entry point
 * @argc: len of arguments
 * @argv: array of arguments
 */
void whatsmyname(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0' ; i++)
		_putchar(argv[0][i]);

	_putchar('\n');
}
