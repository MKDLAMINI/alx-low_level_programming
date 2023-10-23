#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;

	int sum_2 = 0;

	int x;

	for (x = 0; x < size; x++)

	{
		sum_1 = sum_1 + a[x * size + x];

	}

	for (x = size - 1; x >= 0; x--)

	{
		sum_2 += a[x * size + (size - x - 1)];

	}

	printf("%d, %d\n", sum_1, sum_2);

}

