#include "search_algos.h"

/**
 * binary_search - Finds a value in a sort array of integers
 * @array: Pointer to the initial element of array
 * @size: The number of elements of the array
 * @value: value of the array
 * Return: -1 if value is not present or NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t o;
	size_t val_1;
	size_t val_2;

	if (array == NULL)
		return (-1);

	for (val_1 = 0, val_2 = size - 1; val_2 >= val_1;)
	{
		printf("Searching in array: ");
		for (o = val_1; o < val_2; o++)
			printf("%d, ", array[o]);
		printf("%d\n", array[o]);

		o = val_1 + (val_2 - val_1) / 2;
		if (array[o] == value)
			return (o);
		if (array[o] > value)
			val_2 = o - 1;
		else
			val_1 = o + 1;
	}
	return (-1);
}
