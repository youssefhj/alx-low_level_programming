#include "main.h"

/**
 * set_bit - set bit of n in index
 * @n: number
 * @index: position of the bit
 *
 * Return: changed number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
