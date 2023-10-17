#include "main.h"
<<<<<<< HEAD
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
=======
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)

>>>>>>> edc2ded04026d5382b600f718f27a293d137631e
{
	int c;

	c = *a;
<<<<<<< HEAD
	*a = *b;
=======

	*a = *b;

>>>>>>> edc2ded04026d5382b600f718f27a293d137631e
	*b = c;

}
