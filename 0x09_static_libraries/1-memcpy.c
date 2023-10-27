#include "main.h"

/**
 *_memcpy - This function duplicates the memory of an area
 *@dest: This is where the memory is originally kept
 *@src: This is where the memory is translated from dest
 *@n: This represents the memory size in bytes
 *
 *Return: returns the copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	int p = 0;

	int q = n;

	for (; p < q; p++)

	{
		dest[p] = src[p];

		n--;
	}

	return (dest);
}
