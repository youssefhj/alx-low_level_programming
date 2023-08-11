#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory
 * @nmemb: number of memmbre
 * @size: size of each member
 * Return: pointer to an array of any type
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *vp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	vp = malloc(size * nmemb);
	if (vp == NULL)
		return (NULL);

	while (nmemb--)
		vp[nmemb] = '0';
	return (vp);
}
