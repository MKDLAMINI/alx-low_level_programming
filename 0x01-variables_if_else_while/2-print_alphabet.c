#include <stdio.h>

/**
 * main - THis starts the C code
 *
 * Return: Returns 0 after complete code execution
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}

	putchar('\n');
	return (0);
}
