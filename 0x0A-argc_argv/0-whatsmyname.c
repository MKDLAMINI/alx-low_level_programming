#include <stdio.h>
#include "main.h"

/**
 * main - This function will print the name of the program
 * @argc: This stores the number of arguments
 * @argv: THis stores the array of arguments
 *
 * Return: Will return 0 upon successful file execution
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);

}
