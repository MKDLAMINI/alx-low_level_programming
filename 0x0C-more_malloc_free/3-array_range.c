#include "main.h"
#include <stdlib.h>

/**
 * array_range - This function will create an array of integers
 * @min: This represents min range value
 * @max: This represents max range value
 *
 * Return: This will return ptr to new array
 */
int *array_range(int min, int max)
{
	int *ptr_value;
	int f;
	int range;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	ptr_value = malloc(sizeof(int) * range);
	if (ptr_value == NULL)
		return (NULL);
	for (f = 0; min <= max; f++)
		ptr_value[f] = min++;
	return (ptr_value);
}

