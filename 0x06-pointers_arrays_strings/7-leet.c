#include "main.h"

/**
 * leet - encode string
 * @s: pointer to string
 * Return: string
 */
char *leet(char *s)
{
	char *ps;
	char *s1 = "ol ea  t";
	char *s2 = "OL EA  T";
	int i;

	for (ps = s ; *ps != '\0' ; ps++)
	{
		for (i = 0 ; i <= 7 ; i++)
		{
			if ((*ps == s1[i] || *ps == s2[i]) && s1[i] != ' ')
				*ps = i;
		}
	}
	return (s);
}

