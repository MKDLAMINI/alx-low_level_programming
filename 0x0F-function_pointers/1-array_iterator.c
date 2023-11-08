#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - This function executes a func as a param on an array
 * @array: This is the array
 * @size: This represenets size in bytes of the array
 * @action: This is the pointer that will be printed
 *
 * Return: This will return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int gm;

	if (array == NULL || action == NULL)

		return;

	for (gm = 0; gm < size; gm++)
	{
		action(array[gm]);
	}
}
