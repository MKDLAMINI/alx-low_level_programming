#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function multiplies two int
 * @argc: This value is the number of command line argyments
 * @argv: This value is the array of command line arguments
 *
 * Return: this will return 0 upon successful execution
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);

}
