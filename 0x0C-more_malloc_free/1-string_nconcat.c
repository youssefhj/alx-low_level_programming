#include "main.h"
#include <stdlib.h>

/**
 * _strlen - sring length
 * @str: string
 * Return: integer represent the string len
 */
unsigned int _strlen(char *str)
{
	int len;

	if (str == NULL)
		return (0);

	for (len = 0; str[len] != '\0' ; len++)
		;

	return (len);
}

/**
 * string_nconcat - concat s1 and s2
 * @s1: first string
 * @s2: second string
 * @n: input
 * Return: concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (len1 == 0 && len2 == 0)
		return (NULL);

	if (n < len2)
		len2 = n;

	s1 = (char *) realloc(s1, len1 + len2 + 1);
	if (s1 == NULL)
		return (NULL);

	for (i = len1, j = 0 ; i < len1 + len2 + 1 ; i++, j++)
		s1[i] = s2[j];

	s[i] = '\0';
	return (s1);


}
