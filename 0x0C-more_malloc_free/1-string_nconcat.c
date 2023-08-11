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
	char *str;
	unsigned int i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	str = (char *) realloc(s1, len1 + n + 1);
	if (s1 == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0' ; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);


}
