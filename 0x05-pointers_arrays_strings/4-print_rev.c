#include "main.h"

/**
 * print_rev - reverse of s
 * @s: pointer to string
 */

void print_rev(char *s)
{
	char *ps;
	int len;

	for (ps = s ; *ps != '\0' ; ps++)
		;

	len = ps - s;

	for (ps = s + len - 1 ; ps >= s ; ps--)
		_putchar(*ps);

	_putchar('\n');


}
