#include "main.h"

/**
 * flip_bits - number of flips from n to m
 * @n: first number
 * @m: second number
 *
 * Return: flips number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned int count = 0;

	while (val)
	{
		if (val & 1ul)
			count++;

		val = val >> 1;
	}

	return (count);
}
