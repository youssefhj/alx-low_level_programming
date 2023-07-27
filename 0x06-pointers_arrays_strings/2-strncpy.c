#include "main.h"

/**
 * _strncpy - copy src to dest
 * @dest: pointer
 * @src: pointer
 * @n: size
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n  ; i++)
		dest[i] = src[i];

	if (src[i] == '\0')
		dest[i] = '\0';

	return (dest);
}
