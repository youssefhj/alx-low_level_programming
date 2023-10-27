#include "main.h"

/**
 * get_endianness - endianness
 *
 * Return: 0 if big endian otherwize 1
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *) &n);
}
