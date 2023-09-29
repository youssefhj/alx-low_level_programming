#include "main.h"

/**
 * clear_bit - clear bit at index
 * @n: number
 * @index: index
 *
 * Return: 1 on success -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(unsigned long int)))
		return (-1);

	*n = *n & (~(1L << index));
	return (1);
}
