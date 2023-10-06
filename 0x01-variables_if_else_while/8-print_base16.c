#include <stdio.h>

/**
 * main - Entry point of C program
 *
 * Return: returns 0 after successfully execution
 */

int main(void)
{
	int p;
	char q;

	for (p = 0 ; p < 10 ; p++)
		putchar(p + '0');
	for (q = 'a' ; q <= 'f' ; q++)
		putchar(q);
	putchar('\n');
	return (0);
}
