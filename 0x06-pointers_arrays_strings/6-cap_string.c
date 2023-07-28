#include "main.h"

/**
 * is_spetial_caracter - test if c is a spertial char
 * @c: tested caracter
 * Return: 1 if true 0 otherwize
 */
int is_spetial_caracter(char c)
{
	char array_caracter[] = {',', ';', '.', '!', '?', '"', '(',
		')', '{', '}', '\t', '\n', ' '};

	for (i = 0 ;  i <= 12 ; i++)
		if (c == array_caracter[i])
			return (1);

	return (0);
}

/**
 * cap_string - capitalize string s
 * @s: pointer to string
 * Return: capitalize string
 */
char *cap_string(char *s)
{
	char *ps;
	int is_first_caracter;


	if (*s >= 'a' && *s <= 'z')
		*s -= 32;

	for (ps = s + 1 ; *ps != '\0' ; ps++)
	{
		if (*ps >= 'a' && *ps <= 'z')
		{
			if (is_spetial_caracter(*(ps - 1)))
					*ps -= 32;
		}
	}
	return (s);
}
