#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry of the program
 * @argc: number of command lines arguments
 * @argv: Array of strings storing command line arguments
 *
 * Return: return 0 when successful
 */

int main(int argc, char **argv)
{
	int coins = 0;

	int change = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");

		return (1);

	}

	coins = atoi(argv[1]);

	while (coins > 0)
	{
		if (coins >= 25)
			coins -= 25;
		else if (coins >= 10)
			coins -= 10;
		else if (coins >= 5)
			coins -= 5;
		else if (coins >= 2)
			coins -= 2;
		else if (coins >= 1)
			coins -= 1;
		change += 1;

	}

	printf("%d\n", change);

	return (0);

}
