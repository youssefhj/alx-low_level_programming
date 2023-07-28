#include "main.h"

/**
 * cap_string - capitalize string s
 * @s: pointer to string
 * Return: capitalize string
 */
char *cap_string(char *s)
{
	char *ps;

	if (*s >= 'a' && *s <= 'z')
		*s -= 32;

	for (ps = s + 1 ; *ps != '\0' ; ps++)
	{
		if (*ps >= 'a' && *ps <= 'z')
		{
			if (*(ps - 1) == ' ' || *(ps - 1) == '\t'
				|| *(ps - 1) == '\n' || *(ps - 1) == ','
				|| *(ps - 1) == ';' || *(ps - 1) == '.'
				|| *(ps - 1) == '!' || *(ps - 1) == '?'
				|| *(ps - 1) == '"' || *(ps - 1) == '('
				|| *(ps - 1) == ')' || *(ps - 1) == '{'
				|| *(ps - 1) == '}')

				*ps -= 32;
		}
	}
	return (s);
}
