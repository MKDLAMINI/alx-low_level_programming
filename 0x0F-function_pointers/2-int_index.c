#include "function_pointers.h"

/**
 * int_index - This function will return index of the first element
 * @size: This is the number of elements in the array
 * @array: This is the array
 * @cmp: This is the ptr to the func to be used to compare values
 * Return: if no element matches return -1, otherwise return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int gm;

	if (array == NULL || size <= 0 || cmp == NULL)

		return (-1);

	for (gm = 0; gm < size; gm++)
	{
		if (cmp(array[gm]))

			return (gm);
	}

	return (-1);
}
