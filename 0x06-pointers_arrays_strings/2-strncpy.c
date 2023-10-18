#include "main.h"
/**
 * _strncpy - Copies a string, at most n bytes from src.
 * @dest: The destination buffer where the copied string is stored.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the destination buffer dest.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

	{
		dest[i] = src[i];

	}

	for (; i < n; i++)

	{
		dest[i] = '\0';

	}

	return (dest);

}
