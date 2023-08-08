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
	if (size == 0)
		return (NULL);

	return (malloc(sizeof(c) * size));
}
