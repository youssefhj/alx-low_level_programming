#include "main.h"

/**
 * _puts - display in standard output str
 * @str: pointer to a string
 */
void _puts(char *str)
{
	char *pstr;

	for (pstr = str ; *pstr != '\0' ; ++pstr)
		_putchar(*pstr);

	_putchar('\n');

}
