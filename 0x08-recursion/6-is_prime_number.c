#include "main.h"

int definite_prime(int n, int index);

/**
 * is_prime_number - function verifies whether an int is a prime integer
 * @n: Accesses the integer
 *
 * Return: returns 1 if n value is the prime integer, otherwise return 0
 */
int is_prime_number(int n)

{
	if (n <= 1)

	{
		return (0);

	}

	return (definite_prime(n, n - 1));

}

/**
 * definite_prime - Function checks for the definite prime integer
 * @n: checks out prime integer
 * @index: This is the iterator
 *
 * Return: returns 1 if n value is the prime integer, otherwise return 0
 */
int definite_prime(int n, int index)

{
	if (index == 1)

	{
		return (1);

	}

	if (n % index == 0 && index > 0)

	{
		return (0);

	}

	return (definite_prime(n, index - 1));

}
