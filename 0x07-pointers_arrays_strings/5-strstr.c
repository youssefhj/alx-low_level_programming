#include "main.h"

/**
 * _strstr - location o needle in hystack
 * @hystack: string
 * @needle: strin
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		k = i;
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if(needle[j] == haystack[k])
				k++;
			else
				break;
					
		}
		if(needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
	
}
