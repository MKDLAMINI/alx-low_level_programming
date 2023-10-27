#include "main.h"
/**
 * _strcat - This function links the two strings
 * @dest: This is the value that is the input
 * @src: This is the additional input value
 *
 * Return: This will return void
 */
char *_strcat(char *dest, char *src)

{
	int p = 0;

	int q = 0;

	while (dest[p] != '\0')

	{
		p++;

	}

	while (src[q] != '\0')

	{
		dest[p] = src[q];

		p++;

		q++;

	}

	dest[p] = '\0';

	return (dest);
}
