#include "main.h"

/**
* _strncat - function concatenate two strings
* using at most n bytes from src
* @dest: entered value
* @src: entered value
* @n: entered value
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)

{
	int p = 0;

	int q = 0;

	while (dest[p] != '\0')

	{

		p++;

	}

	while (q < n && src[q] != '\0')

	{

		dest[p] = src[q];

		p++;

		q++;

	}

	dest[p] = '\0';

	return (dest);

}
