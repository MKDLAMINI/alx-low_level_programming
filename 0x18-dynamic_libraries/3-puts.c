#include "main.h"
/**
 * _puts - function prints a string followed by newline
 * @str: prints out the string
 */
void _puts(char *str)
{
	while (*str != '\0')

	{
		_putchar(*str++);

	}


		_putchar('\n');

}
