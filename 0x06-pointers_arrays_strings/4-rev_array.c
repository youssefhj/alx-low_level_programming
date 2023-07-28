#include "main.h"

/**
 * reverse_array - reserver a given array
 * @a: pointer to an array
 * @n: size of the given array
 */
void reverse_array(int *a, int n)
{
	int *ibegin, *iend;
	int tmp;

	for (ibegin = a, iend  = a + n - 1 ; ibegin < iend ; ibegin++, iend--)
	{
		tmp = *ibegin;
		*ibegin = *iend;
		*iend = tmp;
	}
}
