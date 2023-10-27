#include "main.h"
/**
 * _strncpy - This function duplicates a string
 * @dest: This is the input value
 * @src: Value to be entered
 * @n: This is the value that will be entered
 *
 * Return: returns dest upon successful compilation
 */
char *_strncpy(char *dest, char *src, int n)

{
	int g = 0;

	while (g < n && src[g] != '\0')

	{
		dest[g] = src[g];

		g++;

	}

	while (g < n)

	{
		dest[g] = '\0';

		g++;
	}

	return (dest);
}
