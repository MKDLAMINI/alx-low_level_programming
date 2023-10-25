#include "main.h"

/**
 * factorial - returns the value of factorial of given number
 * @n: prints out the factorial
 *
 * Return: return the function n
 */
int factorial(int n)
{
	if (n < 0)

	{
		return (-1);

	}

	if (n == 0)

	{
		return (1);

	}

	return (n * factorial(n - 1));

}
