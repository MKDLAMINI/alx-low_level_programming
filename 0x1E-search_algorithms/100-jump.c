#include "search_algos.h"

/**
 * jump_search - finds a value in a sorted array.
 * @array: points to the first element of the array.
 * @size: number of elements in the array.
 * @value: value to be found.
 * Return: -1, if the value is not present or the array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t val_1;
	size_t val_2;
	size_t p;

	if (array == NULL || size == 0)
		return (-1);

	val_2 = sqrt(size);
	for (p = val_1 = 0; val_1 < size && array[val_1] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", val_1, array[val_1]);
		p = val_1;
		val_1 += val_2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", p, val_1);

	val_1 = val_1 < size - 1 ? val_1 : size - 1;
	for (; p < val_1 && array[p] < value; p++)
		printf("Value checked array[%ld] = [%d]\n", p, array[p]);
	printf("Value checked array[%ld] = [%d]\n", p, array[p]);

	return (array[p] == value ? (int)p : -1);
}
