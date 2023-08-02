#include "main.h"

/**
 * _puts_recursion - display string with recursion
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

}
