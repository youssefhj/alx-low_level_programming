#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - allocate grid
 * @width: grid column
 * @height: grid row
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **matrix, **pmatrix;
	int l, c;

	matrix = (int **) malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (pmatrix = matrix ; pmatrix < matrix + height ; pmatrix++)
		*pmatrix = (int *) malloc(sizeof(int) * width);

	for (l = 0 ; l < height ; l++)
		for (c = 0 ; c < width ; c++)
			matrix[l][c] = 0;

	return (matrix);

}
