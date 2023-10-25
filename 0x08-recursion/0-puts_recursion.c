#include "main.h"

/**
 * _puts_recursion - main function
 * *@s: prints the string
 *
 * Return - 0 when code is successful
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;

	}

	_putchar(*s);
	_puts_recursion(s + 1);

}
