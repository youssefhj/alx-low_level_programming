#include "main.h"

/**
 * set_bit - set bit to 1 at ith-index
 * @n: number
 * @index: position
 *
 * Return: 1 on success -1 on failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		(*n) |= 1L << index;
		return (1);
	}

	return (-1);
}
