#include "main.h"

/**
 * _strchr - locate the c caracter
 * @s: string
 * @c: caracter
 * Return: pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);

}
