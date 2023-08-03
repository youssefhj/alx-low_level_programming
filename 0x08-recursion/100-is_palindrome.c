#include "main.h"

/**
 * check - check if i caracter is equle to i + len caracter
 * @s1: string
 * @s2: string
 * Return: 1 success o otherwize
 */
int check(char *s1, char *s2)
{
	if (s1 == s2)
		return (1);

	if (*s1 != *s2)
		return (0);

	return (check(++s1, --s2));
}

/**
 * is_palindrome - check if is palandrome
 * @s: string
 * Return: 1 if s palandrome 0 otherwize
 */
int is_palindrome(char *s)
{
	int len;
	char *ps;

	for (ps = s; *ps != '\0'; ps++)
		;

	len = ps - s;
	return (check(s, s + len - 1));

}
