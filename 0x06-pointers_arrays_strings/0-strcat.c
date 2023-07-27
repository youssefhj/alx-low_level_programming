#include "main.h"

/**
 * _strcat - append stc to dest
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	char *pdest;

	for (pdest = dest ; *pdest != '\0' ; pdest++)
		;

	while (src++)
	{
		*pdest = *src;
		pdest++;
	}
	return (dest);
}
