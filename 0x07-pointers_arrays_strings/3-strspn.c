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
	for (i = 0 ; s[i] != 0 ; i++)
	{
		ok = 1;
		for (j = 0 ; accept[j] != 0 ; j++)
		{
			if (s[i] == accept[j])
			{
				ok = 0;
				break;
			}
		}
		if (ok == 1)
			count++;
	}
	return (count);
}
