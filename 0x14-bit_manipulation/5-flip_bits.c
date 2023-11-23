#include "main.h"
/**
 * flip_bits - function returns number of bits to be flipped
 * @n: number to be flipped
 * @m: number to be flipped
 * Return: returns flipped numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v = 0;
	int bit_tally = 0;
	unsigned long int interim;
	unsigned long int new_result = n ^ m;

	for (v = 20; v >= 0; v--)
	{
		interim = new_result >> v;
		if (interim & 1)
			bit_tally++;
	}
	return (bit_tally);
}
