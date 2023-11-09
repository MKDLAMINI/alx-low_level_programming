#include "variadic_functions.h"

/**
 * sum_them_all - This func returns sum of all param
 * @n: This represents the summed parameter
 *
 * Return: if n == 0 then return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list we;
	unsigned int f, sum = 0;

	va_start(we, n);

	for (f = 0; f < n; f++)
		sum += va_arg(we, int);

	va_end(we);

	return (sum);
}
