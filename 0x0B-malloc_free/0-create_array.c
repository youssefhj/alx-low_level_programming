#include "main.h"
#include <stdlib.h>

/**
 * create_array - creation than array
 * @size: size of array
 * @c: a caracter
 * Return: a pointer to the array generated
 */
char *create_array(unsigned int size, char c)
{
	char *ps, *tmp;

	ps = NULL;
	if (size == 0)
		return (ps);

	ps = malloc(sizeof(char) * size);
	if (ps != NULL)
		for (tmp = ps ; tmp < ps + size ; tmp++)
			*tmp = c;

	return (ps);
}
