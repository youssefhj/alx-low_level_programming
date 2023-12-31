#include "main.h"
#include <stdlib.h>

/**
 * str_concat - string concatenation
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int lens1, lens2, i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";


	lens1 = lens2 = 0;

	for (i = 0 ; s1[i] != '\0' ; i++)
		lens1++;

	for (i = 0; s2[i] != '\0' ; i++)
		lens2++;

	str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (str != NULL)
	{
		for (i = 0 ; i < lens1 + lens2; i++)
		{
			if (i < lens1)
				str[i] = s1[i];
			else
				str[i] = s2[i - lens1];

		}

		str[i] = '\0';
	}
	return (str);
}
