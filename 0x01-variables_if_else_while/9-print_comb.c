#include <stdio.h>

/**
 * main - main function
 *
 * Return: returns 0 after successfully execution
 */

int main(void)
{
	int p;

	for (p = 0 ; p < 10 ; p++)
	{
		putchar(p + '0');
		if (p != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
