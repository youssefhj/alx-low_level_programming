#include "main.h"

/**
 * _puts_recursion - display string with recursion
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return (_putchar('\n'));

	_putchar(*s);
	return (_puts_recursion(s++));

}
