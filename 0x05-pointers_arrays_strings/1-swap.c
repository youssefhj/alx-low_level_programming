#include "main.h"

/**
 * swap_int - permute a and b
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
