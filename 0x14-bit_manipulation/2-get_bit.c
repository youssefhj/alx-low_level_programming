#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: bit position
 *
 * Return: bit at position index or -1 error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(unsigned long int)))
		return (-1);

	return (n >> index & 1);
}
