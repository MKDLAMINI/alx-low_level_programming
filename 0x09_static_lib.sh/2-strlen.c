#include "main.h"

/**
 * _strlen - This function will print out the length of the string
 * @s: This is the string value
 * Return: returns the length of the string
 */

int _strlen(char *s)

{
	int length = 0;

	while (*s != '\0')

	{
		length++;

		s++;

	}

	return (length);
}
