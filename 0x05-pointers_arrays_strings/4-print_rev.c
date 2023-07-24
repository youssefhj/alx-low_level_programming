#include "main.h"

/**
 * print_rev - reverse of s
 * @s: pointer to string
 */

void print_rev(char *s)
{
	char *ps;

	for (ps = s + _strlen(s) - 1 ; ps >= s ; ps--)
		_putchar(*ps);

	_putchar('\n');


}
