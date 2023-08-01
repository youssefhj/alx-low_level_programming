#include "main.h"

/**
 * _strspn - count the caracter on s that not exist in accept
 * @s: string
 * @accept: string
 * Return: number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, ok;

	count = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		ok = 0;
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				ok = 1;
			}
		}
		if (count == 0)
			break;
	}
	return (count);
}
