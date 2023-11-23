#include "main.h"
/**
 * get_bit - function returns value of bit given index
 * @index: starts from 0 of bit to retrieve
 * @n: value to be returned
 * Return: returns value of index or - 1 is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int factorize, verify;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	factorize = 1 << index;
	verify = n & factorize;
	if (verify == factorize)
		return (1);
	return (0);
}
