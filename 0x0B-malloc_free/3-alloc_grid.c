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
	int ht;
	int wt;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dimensional_grid = malloc(sizeof(int *) * height);

	if (two_dimensional_grid == NULL)
		return (NULL);

	for (ht = 0; ht < height; ht++)
	{
		two_dimensional_grid[ht] = malloc(sizeof(int) * width);

		if (two_dimensional_grid[ht] == NULL)
		{
			for (; ht >= 0 ; ht--)

				free(two_dimensional_grid[ht]);

			free(two_dimensional_grid);

			return (NULL);

		}

	}
	for (ht = 0; ht < height; ht++)
	{
		for (wt = 0; wt < width; wt++)
			two_dimensional_grid[ht][wt] = 0;
	}
	return (two_dimensional_grid);

}


