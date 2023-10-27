#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function multiplies two int
 * @argc: This value represents number of command line arguments
 * @argv: This array contains the command line arguments
 * Return: This will return 0 upon succession
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
