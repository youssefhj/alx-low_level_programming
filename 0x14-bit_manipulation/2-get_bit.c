#include "main.h"

/**
 * get_bit - get the bit value at ith-index
 * @n: number
 * @index: bit position
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n >> index) & 1)
		return (1);
	else
		return (0);


	return (-1);
}
