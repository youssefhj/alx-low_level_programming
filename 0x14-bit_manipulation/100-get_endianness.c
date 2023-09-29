#include "main.h"

/**
 * get_endianness - check the endianess
 *
 * Return: 0 big endian 1 little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;

	return (*(char *)&n);
}
