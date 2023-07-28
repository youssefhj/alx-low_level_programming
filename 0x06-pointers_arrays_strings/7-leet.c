#include "main.h"

/**
 * leet - encode string
 * @s: pointer to string
 * Return: string
 */
char *leet(char *s)
{
	int i;
	char *ps;
	char *s1 = "oOlLeEaAtT";
	char *s2 = "0011334477";

	for (ps = s ; *ps != '\0' ; ps++)
	{
		for (i = 0 ; i <= 9 ; i++)
		{
			if (*ps == s1[i])
			{
				*ps = s2[i];
				break;
			}
		}
	}
	return (s);
}

