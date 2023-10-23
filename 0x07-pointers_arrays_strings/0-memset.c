#include "main.h"

/**
 * _memset - This function will fill a block of memory with a specific value
 * @s: Starts address of memory tat will be filled
 * @b: input the value
 * @n: THe number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;

		n--;

	}

	return (s);

}
