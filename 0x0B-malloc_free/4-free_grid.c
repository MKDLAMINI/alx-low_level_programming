#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - This function frees a 2 dimensional grid
 * @height: Holds value height of grid
 * @grid: grid to be freed
 */

void free_grid(int **grid, int height)
{
	int qp;

	for (qp = 0; qp < height; qp++)
	{
		free(grid[qp]);

	}
	free(grid);

}
