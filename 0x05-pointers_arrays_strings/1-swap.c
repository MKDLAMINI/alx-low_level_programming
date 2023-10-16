#include "main.h"
#include <stdio.h>

/**
 * main - main function of c code
 *
 * swap_int - function swaps the values of two integers
 *
 * @a: integer will swap
 *
 * @b: integer will swap
 *
 * Return: return 0 when successful
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
