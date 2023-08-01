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

	for (i = 0 ; s[i] != '\0' ; i++)
		if (s[i] == c)
			return (s + i);
	return ('\0');

}
