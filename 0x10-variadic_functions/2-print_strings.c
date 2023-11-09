#include "variadic_functions.h"

/**
 * print_strings - This function prints strings followed by a newline
 * @separator: This will be printed between strings
 * @n: Number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list new_string;
	char *string;
	unsigned int indicator;

	va_start(new_string, n);

	for (indicator = 0; indicator < n; indicator++)
	{
		string = va_arg(new_string, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (indicator != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(new_string);
}
