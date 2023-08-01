#include "main.h"

/**
 * _strpbrk - location of the first occurence in s
 * @s: string
 * @accept: string
 * Return: pointer to the location
 */
char *_strpbrk(char *s, char *accept)
{
	char *min_location, *max_location;
	int i, j, len;

	len = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		le++;

	max_location = s + len - 1;
	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (accept[i] == s[j])
			{
				if (min_location < max_location)
				{
					min_location = s + j;
					max_location = min_location;
				}
			}
		}
	}

	return (min_location);
}
