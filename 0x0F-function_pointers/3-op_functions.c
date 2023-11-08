#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This will print out the sum of two integers
 * @a: This is the first int
 * @b: This is the second int
 *
 * Return: This returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This will print out the difference of two integers
 * @a: This is the first int
 * @b: This is the second int
 *
 * Return: This returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This returns the answer of multiplied integers
 * @a: This is the first int
 * @b: This is the second int
 *
 * Return: The answer of multiplied integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Prints out the division of two integers
 * @a: This is the first int
 * @b: This is the second int
 *
 * Return: The answer of divided integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This will return answer of divided integers
 * @a: This is the first int
 * @b: This is the second int
 *
 * Return: Returns answer of divided integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
