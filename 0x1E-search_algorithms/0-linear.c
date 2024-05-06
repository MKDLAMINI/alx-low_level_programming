#include "search_algos.h"

/**
 * linear_search - function searches for a value in an array
 *                 using the Linear Search Algorithm
 * @array: A pointer to first element of the array that is searched
 * @size: Number of elements in the array
 * @value: value that is searched
 * Return: -1 if value is not present in array or is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
