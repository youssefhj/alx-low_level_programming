#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - print the sum of the first diagonal then the second
 * @a: matrix
 * @size: dimension of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0
	for (i = 0, j = size ; i < size ; i++, j--)
	{
		sum1 += a[i][i];
		sum2 += a[j][j];
	}
	printf("%d, %d\n", sum1, sum2);
}
