#include "main.h"

/**
 * _memcpy - this function copies the memory area
 * @dest: this is the memory area where n bytes is stored
 * @src: this is where the memory is copied
 * @n: this displays number of bytes
 *
 * Return: Copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;

	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];

		n--;

	}

	return (dest);

}
