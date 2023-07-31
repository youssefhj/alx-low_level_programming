#include "main.h"

/**
 * _strchr - locate the c caracter
 * @s: string
 * @c: caracter
 * Return: pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);

}
