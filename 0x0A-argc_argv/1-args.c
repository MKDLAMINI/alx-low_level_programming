#include <stdio.h>
#include "main.h"

/**
 * main - This function will execute arguments parsed into program
 * @argc: This stores the number of arguments
 * @argv: This stores the array of the arguments
 *
 * Return: THis will return 0 upon successful file execution
 */
int main(int argc, char *argv[])

{
	(void) argv; /*Forget this argv*/

	printf("%d\n", argc - 1);

	return (0);

}
