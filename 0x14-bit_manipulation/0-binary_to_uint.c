#include "main.h"
/**
 * binary_to_uint - function converts binary number to an int
 * @b: ptr to string of 0 and 1 chars
 * Return: converted number or else 0
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int integer;

	integer = 0;

	if (!b)
		return (0);

	for (v = 0; b[v] != '\0'; v++)
	{
		if (b[v] != '0' && b[v] != '1')
			return (0);
	}
	for (v = 0; b[v] != '\0'; v++)
	{
		integer <<= 1;
		if (b[v] == '1')
			integer += 1;
	}
	return (integer);
}
