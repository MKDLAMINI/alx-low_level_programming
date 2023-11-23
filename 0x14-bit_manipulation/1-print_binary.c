#include "main.h"
/**
 * print_binary - function prints binary representation of a number
 * @n: the binary value to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int factorize, verify;
	char inspect;

	inspect = 0;
	factorize = _expo(2, sizeof(unsigned long int) * 8 - 1);
	while (factorize != 0)
	{
		verify = n & factorize;
		if (verify == factorize)
		{
			inspect = 1;
			_putchar('1');
		}
		else if (inspect == 1 || factorize == 1)
		{
			_putchar('0');
		}
		factorize >>= 1;
	}
}
/**
 * _expo - function calculates base ^ power
 * @base: the base of exponent
 * @power: the power of the exponent
 * Return: return output of base ^ power
 */
unsigned long int _expo(unsigned int base, unsigned int power)
{
	unsigned int v;
	unsigned long int integer;

	integer = 1;
	for (v = 1; v <= power; v++)
		integer *= base;
	return (integer);
}
