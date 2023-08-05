#include "main.h"

/**
 * _strlen - string length
 * @s: pointer to a string
 * Return: length
 */
int _strlen(char *s)
{
	char *ps;

	for (ps = s ; *ps != '\0' ; ++ps)
		;

	return (ps - s);
}
