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

	nstr = malloc(sizeof(char) * lenstr);
	if (nstr != NULL)
	{
		for (pnstr = nstr, pstr = str ; pnstr < str + lenstr ; pstr++, pnstr++)
			*pnstr = *pstr;
		*pnstr = '\0';

	}
	return (nstr);
}
