#include "main.h"
#include <stdlib.h>

/**
 * _strdup - string duplicatation
 * @str: string
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int lenstr, i;
	char *nstr, *pstr, *pnstr;

	if (str == NULL)
		return (NULL);

	lenstr = 0;
	for (i = 0 ; str[i] != '\0'; i++)
		lenstr++;

	nstr = malloc(sizeof(char) * (lenstr + 1));
	if (nstr != NULL)
	{
		for (pnstr = nstr, pstr = str ; pnstr < str + lenstr ; pstr++, pnstr++)
			*pnstr = *pstr;
		*pnstr = '\0';

	}
	str = malloc(sizeof(char) * (lenstr + 1));
	if (str != NULL)
	{
		for (pnstr = nstr, pstr = str; pnstr < str + lenstr ; pstr++, pnstr++)
			*pstr = *pnstr;

		*pstr = '\0';
	}

	free(nstr);
	return (str);
}
