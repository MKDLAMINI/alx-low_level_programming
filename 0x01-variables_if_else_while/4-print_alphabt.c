#include <stdio.h>

/**
 * main - beginning of C code
 *
 * Return: returns 0 after successfully execution
 */
int main(void)
{
	char p;

	for (p = 'a' ; p <= 'z' ; p++)
		if (p != 'q' && p != 'e')
			putchar(p);
	putchar('\n');
	return (0);
}
