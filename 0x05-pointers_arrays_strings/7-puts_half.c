#include "main.h"

/**
 * puts_half - display the half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	char *pstr;
	int len;

	for (pstr = str ; *pstr != '\0' ; pstr++)
		;

	len = pstr - str;

	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len - 1) / 2;

	for (pstr = str + len ; *pstr != '\0' ; *pstr++)
		_putchar(*pstr);

	_putchar(*pstr);
}
