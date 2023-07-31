#include "main.h"

/**
 * _strchr - locate the c caracter
 * @s: string
 * @c: caracter
 * Return: pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');

}