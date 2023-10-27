#include "main.h"

/**
 *_memset - This function sets a block of memory with a unique value
 *@s: This is where the memory address will be set
 *@b: This is the value that will be printed out at the end of operation
 *@n: This value will change in memory size (bytes)
 *
 *Return: Returns a new value for n
 */
char *_memset(char *s, char b, unsigned int n)

{
	int p = 0;

	for (; n > 0; p++)

	{
		s[p] = b;

		n--;

	}

	return (s);

}
