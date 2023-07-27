#include "main.h"

/**
 * _strncat - append stc to dest
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: n caracter
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pdest;
	int size;

	for (pdest = dest ; *pdest != '\0' ; pdest++)
		;

	size = 0;
	while (src[size] != '0' && size < n)
	{
		*pdest = src[size];
		pdest++;
		size++;
	}
	*pdest = '\0';
	return (dest);
}
