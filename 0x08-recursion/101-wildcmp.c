#include "main.h"

/**
 * wildcmp - This function compares the two strings
 * @s1: This is the first string
 * @s2: This is the second string that is assigned with the '*'
 *
 * Return: returns 1 if the strings are identical, if not return 0
 */
int wildcmp(char *s1, char *s2)

{
	if (*s1 == '\0')

	{
		if (*s2 != '\0' && *s2 == '*')

		{
			return (wildcmp(s1, s2 + 1));

		}

		return (*s2 == '\0');
	}

	if (*s2 == '*')

	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	}

	else if (*s1 == *s2)

	{
		return (wildcmp(s1 + 1, s2 + 1));

	}

	return (0);

}
