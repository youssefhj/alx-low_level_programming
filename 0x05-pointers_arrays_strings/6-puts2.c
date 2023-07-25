#include "main.h"

/**
 * puts2 - puts string and skip the next
 * @str: pointer to string
 */

void puts2(char *str)
{
	char *pstr;

	for (pstr = str ; *pstr != '\0' ; pstr++)
	{
		_putchar(*pstr);
		pstr++;
	}
}
