#include "main.h"

/**
 * set_bit - set bit at index
 * @n: number
 * @index: index
 *
 * Return: 1 success -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(unsigned long int)))
		return (-1);

	*n = *n | (1L << index);
	return (1);
}
