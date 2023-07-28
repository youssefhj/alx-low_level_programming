#include "main.h"

/**
 * string_toupper - change string to upercase
 * @s: pointer to string
 * Return: the new string
 */
char *string_toupper(char *s)
{
	char *ps;

	for (ps = s ; *ps != '\0' ; ps++)
	{
		if (*ps >= 'a' && *ps <= 'z')
			*ps -= 32;
	}
	return (s);
}
