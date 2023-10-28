#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
/**
 * main - This function multiplies two int
 * @argc: This value represents number of command line arguments
 * @argv: This array contains the command line arguments
 * Return: This will return 0 upon succession
=======

/**
 * main - This function multiplies two int
 * @argc: This value is the number of command line argyments
 * @argv: This value is the array of command line arguments
 *
 * Return: this will return 0 upon successful execution
>>>>>>> ea4e62fa4454fde34c5181f88fa0e1426b848e31
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}
<<<<<<< HEAD
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
=======

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

>>>>>>> ea4e62fa4454fde34c5181f88fa0e1426b848e31
	return (0);

}
