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
	char *nstr;

	if (str == NULL)
		return (NULL);

	lenstr = 0;
	for (i = 0 ; str[i] != '\0'; i++)
		lenstr++;

	nstr = malloc(sizeof(char) * (lenstr + 1));
	if (nstr != NULL)
	{
		for (i = 0 ; str[i] != '\0' ; i++)
			nstr[i] = str[i];
		nstr[i] = '\0';

	}
	return (nstr);
}
