#include <stdio.h>

/**
 * main - beginning of C code
 *
 * Return: returns 0 after successful execution
 */

int main(void)
{
	int p;

	for (p = 0 ; p < 10 ; p++)
		putchar(p + '0');
	putchar('\n');
	return (0);
}
