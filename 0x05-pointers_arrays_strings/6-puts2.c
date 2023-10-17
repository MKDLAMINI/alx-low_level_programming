#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)

{
	int length = 0;

	int t = 0;

	char *x = str;

	int o;

	while (*x != '\0')

	{
		x++;

		length++;

	}

	t = length - 1;

	for (o = 0 ; o <= t ; o++)

	{
		if (o % 2 == 0)

	{
		_putchar(str[o]);

	}

	}

	_putchar('\n');

}
