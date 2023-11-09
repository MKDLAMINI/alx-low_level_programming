#include "variadic_functions.h"

/**
 * print_numbers - This func prints integers followed by new line
 * @separator: The string that will be printed between integers
 * @n: number of integers passed to func
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list integers;
	unsigned int indicator;

	va_start(integers, n);

	for (indicator = 0; indicator < n; indicator++)
	{
		printf("%d", va_arg(integers, int));

		if (indicator != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(integers);
}
