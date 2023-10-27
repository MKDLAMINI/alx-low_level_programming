#include "main.h"
/**
 * _atoi - This function will change the string into an int
 * @s: This is the string that will be changed
 * Return: returns integer when successful
 */
int _atoi(char *s)

{
	int symbol = 1, q = 0;

	unsigned int reset = 0;

	while (!(s[q] <= '9' && s[q] >= '0') && s[q] != '\0')

	{
		if (s[q] == '-')

		symbol *= -1;

		q++;

	}

	while (s[q] <= '9' && (s[q] >= '0' && s[q] != '\0'))

	{
		reset = (reset * 10) + (s[q] - '0');

		q++;

	}

	reset *= symbol;

	return (reset);
}

