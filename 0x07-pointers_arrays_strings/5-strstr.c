#include "main.h"

/**
 * _strstr - location o needle in hystack
 * @hystack: string
 * @needle: strin
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	len = 0;
	for (i = 0 ; needle[i] != '\0' ; i++)
		len++;

	for (i = 0, j = 0 ; hystack[i] != '\0' && neelde[j] != '\0' ; i++)
	{
		if (hystack[i] == needle[j])
		{
			j++;
			if (len == j)
				return (hystack + j - len + 1);
		}
		else
			j = 0;
	}
	return ('\0');
	
}
