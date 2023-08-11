#include "main.h"
#include <stdlib.h>

/**
 * _initialize - initialize the memory
 * @s: input
 * @b: input
 * @n: input
 * Return: s
 */
char *_initialize(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}

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

	_initialize(vp, 0, size * nmemb);

	return (vp);
}
