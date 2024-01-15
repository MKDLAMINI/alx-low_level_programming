#include "main.h"
#include <limits.h>
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

	if (s[0] == '-')
	{
		is_negative = 1;
		i = 1;
	}

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (!is_negative && (n > INT_MAX / 10 || (n == INT_MAX / 10 && digit > 7)))
				return (INT_MAX);
			if (is_negative && (n < INT_MIN / 10 || (n == INT_MIN / 10 && digit > 8)))
				return (INT_MIN);

			n = n * 10 + digit;

		}
		else
		{
			break;

		}

		i++;

	}

	return (is_negative ? -n : n);

}
