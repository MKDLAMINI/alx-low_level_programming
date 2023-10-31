#include "main.h"
#include <stdlib.h>
/**
 * the_free_grid - main function
 * @grid: This is the input value
 * @elevation: This is the input value
 */
void the_free_grid(char **grid, size_t elevation)
{
	if (grid != NULL && elevation != 0)
	{
		for (; elevation > 0; elevation--)
		free(grid[elevation]);
			free(grid[elevation]);
		free(grid);
	}

}
/**
 * strtow - This function splits a string into words
 * @str: This is the string that will split
 *
 * Return: This will return ptr to an array of strings
 */
char **strtow(char *str)
{
	char **magician;
	size_t t, elevation, o, r, mm;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (t = elevation = 0; str[t] != '\0'; t++)
		if (str[t] != ' ' && (str[t + 1] == ' ' || str[t + 1] == '\0'))
		elevation++;
	{
		magician = malloc((elevation + 1) * sizeof(char *));
	}
		if (magician == NULL)
		{
			free(magician);
			return (NULL);
		}
	for (o = mm = 0; o < elevation; o++)
	{
		for (t = mm; str[t] != '\0'; t++)
		{
			if (str[t] == ' ')
				mm++;
			if (str[t] != ' ' && (str[t + 1] == ' ' || str[t + 1] == '\0'))
			{
				magician[t] = malloc((t - mm + 2) * sizeof(char));
				if (magician[t] == NULL)
				{
				the_free_grid(magician, t);
				return (NULL);
				}
				break;
			}
		}
		for (r = 0; mm <= t; mm++, r++)
			magician[t][r] = str[mm];
		magician[t][r] = '\0';
	}
	magician[t] = NULL;
	return (magician);
}
