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

	if (index < sizeof(n) * 8)
		return (n >> index & 1);

	return (-1);

}
