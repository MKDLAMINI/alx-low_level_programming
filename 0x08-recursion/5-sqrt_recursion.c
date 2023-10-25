#include "main.h"

int definite_sqrt_recursion(int n, int index);

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: prints value of square root
 *
 * Return: returns the natural square root of n.
 */
int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);

	}

	return (definite_sqrt_recursion(n, 0));

}

/**
 * definite_sqrt_recursion - function finds real square root
 * @n: prints value of square root
 * @index: This is the iterator
 *
 * Return: returns the square root of n
 */
int definite_sqrt_recursion(int n, int index)

{
	if (index * index > n)
	{
		return (-1);

	}

	if (index * index == n)
	{
		return (index);

	}

	return (definite_sqrt_recursion(n, index + 1));

}
