#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)

{
	int i = 0;
	int n = 0;
	int is_negative = 0;

	while (s[i])
	{
		if (s[i] == '-')
			is_negative = !is_negative;

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}

		i++;

	}

	return (is_negative ? -n : n);

}
