#include "main.h"

/**
 * _pow_recursion - Function returns value of x raised to power y
 * @x: This is the first parameter that is passed in the function
 * @y: This is the second parameter that is passed in the function
 *
 * Return: this will return value of given number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

	{
		return (-1);

	}

	if (y == 0)

	{
		return (1);

	}

	else
		return (x * _pow_recursion(x, (y - 1)));

	return (0);

}
