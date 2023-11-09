#include "variadic_functions.h"

/**
 * print_all - This function prints anything
 * @format: This value lists arg passed to the function
 */
void print_all(const char * const format, ...)
{
	int wet = 0;
	char *new_string, *separate = "";

	va_list print_list;

	va_start(print_list, format);

	if (format)
	{
		while  (format[wet])
		{
			switch (format[wet])
			{
				case 'c':
					printf("%s%c", separate, va_arg(print_list, int));
					break;
				case 'i':
					printf("%s%d", separate, va_arg(print_list, int));
					break;
				case 'f':
					printf("%s%f", separate, va_arg(print_list, double));
					break;
				case 's':
					new_string = va_arg(print_list, char *);
					if (!new_string)
						new_string = "(nil)";
					printf("%s%s", separate, new_string);
					break;

				default:
					wet++;
					continue;
			}
			separate = ", ";
			wet++;
		}
	}
	printf("\n");
	va_end(print_list);
}
