#include "main.h"

/**
 * reverse_array - reserver a given array
 * @a: pointer to an array
 * @n: size of the given array
 */
void reverse_array(int *a, int n)
{
	int ibegin, iend, tmp;

	for (ibegin = 0, iend  = n - 1 ; ibegin > iend ; ibegin++, iend--)
	{
		tmp = a[ibegin];
		a[ibegin] = a[iend];
		a[iend] = tmp;
	}
}
