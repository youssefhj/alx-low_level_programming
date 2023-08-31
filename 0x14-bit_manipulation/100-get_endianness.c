#include "main.h"

/**
 * get_endianness - big or litle endianness
 *
 * Return: 0 for big, 1 for litle
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
