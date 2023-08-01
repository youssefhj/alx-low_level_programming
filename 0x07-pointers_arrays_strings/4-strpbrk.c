#include "main.h"

/**
 * _strpbrk - location of the first occurence in s
 * @s: string
 * @accept: string
 * Return: pointer to the location
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
		for (j = 0 ; accept[j] != '\0' ; j++)
			if (accept[j] == s[i])
				return (s + i);

	return ('\0');
}
