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
	int **matrix, l, c;

	matrix = (int **) malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || matrix == NULL)
		return (NULL);

	for (l = 0 ; l < height ; l++)
	{
		matrix[l] = (int *) malloc(sizeof(int) * width);
		if (matrix[l] == NULL)
		{
			while (l)
			{
				free(matrix[l]);
				l--;
			}
			free(matrix);
			return (NULL);
		}
		for(c = 0 ; c < width ; c++)
			matrix[l][c] = 0;
	}

	return (matrix);

}
