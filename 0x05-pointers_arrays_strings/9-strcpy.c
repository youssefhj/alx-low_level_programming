#include "main.h"

/**
 * _strcpy - copy src to dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}

	return (dest);

}
