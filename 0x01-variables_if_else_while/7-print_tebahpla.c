#include <stdio.h>

/**
 * main - the beginning of all C code
 *
 * Return: return 0 is successful
 */

int main(void)
{
	char p;

	for (p = 'z' ; p >= 'a' ; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
