#include "main.h"

/**
 * flip_bits - number of flip to get from n to m
 * @n: number
 * @m: number
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  bits = 8 * sizeof(unsigned long int);
	unsigned int flips;

	flips = 0;
	n = n ^ m;

	while (bits--)
	{
		if (n >> bits & 1L)
			flips++;
	}

	return (flips);
}
