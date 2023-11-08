#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This function prints out a name
 * @name: The name string to print
 * @f: This is the ptr to the function
 *
 * Return: This will return a none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)

		return;

	f(name);
}
