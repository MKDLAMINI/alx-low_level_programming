#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - This function will return a ptr to a 2 dimensional array
 * @height: This value is the height of the grid
 * @width: This value is the width of the grid
 *
 * Return: returns pointer if successful, otherwise return NULL
 */

int **alloc_grid(int width, int height)
{
	int **two_dimensional_grid;
	int h;
	int w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	two_dimensional_grid = malloc(height * sizeof(int *));
	if (two_dimensional_grid == NULL)
	{
		free(two_dimensional_grid);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		two_dimensional_grid[h] = malloc(width + sizeof(int));
		if (two_dimensional_grid[h] == NULL)
		{
			for (h--; h >= 0; h--)

			free(two_dimensional_grid);
			free(two_dimensional_grid[h]);
			return (NULL);
		}

	}
	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			two_dimensional_grid[h][w] = 0;

	return (two_dimensional_grid);
}
