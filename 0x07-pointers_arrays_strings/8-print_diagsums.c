#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the first diagonal then the second
 * @a: matrix
 * @size: dimension of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	for (i = 0 ; i < size * size ; i += size + 1)
		sum1 += a[i];

	sum2 = 0;
	for (i = size - 1  ; i < (size * size) - size ; i += size - 1)
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
