#include "main.h"

/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 *
 * Return: number of flips to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int  val = n ^ m;

	while (val)
	{
		if (val & 1ul)
			flips++;

		val = val >> 1;
	}

	return (flips);
}
