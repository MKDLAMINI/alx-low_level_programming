#include "main.h"
/**
 * clear_bit - function set the value of bit to 0
 * @n: ptr to unsigned long int
 * @index: starts from 0 of a bit you want to retrieve
 * Return: returns 1 if successful otherwise return - 1 upon error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)

		return (-1);

	*n &= ~(1 << index);

	return (1);
}
