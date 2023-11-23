#include "main.h"
/**
 * flip_bits - function returns number of bits to be flipped
 * @n: number to be flipped
 * @m: number to be flipped
 * Return: returns flipped numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_result = n ^ m;
	unsigned int bit_tally = 0;

	while (new_result > 0)
	{
		bit_tally += new_result & 1;
		new_result >>= 1;
	}

	return (bit_tally);
}
