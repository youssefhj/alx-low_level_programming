#include "main.h"

/**
 * clear_bit - set bit to 0 at ith-index
 * @n: number
 * @index: position
 *
 * Return: 1 on success -1 on failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		if ((*n) & 1L << index)
			*n ^= (1L << index);
		return (1);
	}

	return (-1);
}
