#include "main.h"
#include <stdlib.h>

/**
 * array_range - creation of array of integer
 * @min: min value
 * @max: max value
 * Return: array
 */
int *array_range(int min, int max)
{
	int *p, i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(sizeof(int) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0 ; i < len ; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);

}
