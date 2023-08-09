#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the matrix
 * @grid: double pointer to the grid
 * @height: number of row
 */
void free_grid(int **grid, int height)
{
	int l;

	for (l = 0 ; l < height ; l++)
		free(grid[l]);

	free(grid);
}
