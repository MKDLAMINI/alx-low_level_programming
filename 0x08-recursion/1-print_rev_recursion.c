#include "main.h"

/**
 * _print_rev_recursion - main function printing string in reverse
 * @s: This is the string that will print in reverse
 *
 * Return - Always returns 0 upon successful execution
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')

	{
		return;

	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
