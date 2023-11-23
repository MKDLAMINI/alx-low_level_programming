#include "main.h"
/**
 * set_bit - function sets value of bit to 1
 * @index: starting fron 0 of a bit you want to set
 * @n: ptr to unsigned int
 * Return: returns 1 if successful otherwise - 1 upon error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value_of_bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	value_of_bit = 1 << index;
	*n = *n | value_of_bit;
	return (1);
}
