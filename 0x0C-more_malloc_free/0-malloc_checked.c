#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory of size b
 * @b: size
 * Return: any type of pointer
 */
void *malloc_checked(unsigned int b)
{
	void *vp;

	vp = malloc(b);

	if (vp == NULL)
		exit(98);

	return (vp);

}
