#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This function will add integers
 * @argc: This value represents number of command arguments
 * @argv: This value represents an array of command arguments
 *
 * Return: returns 0 upon successful execution, otherwise 1 error
 */
int main(int argc, char *argv[])
{
	int v, w, addition = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);

	}

	for (v = 1; v < argc; v++)
	{
		for (w = 0; argv[v][w] != '\0'; w++)
		{
			if (!isdigit(argv[v][w]))
			{
				printf("Error\n");
				return (1);

			}

		}
		addition += atoi(argv[v]);

	}
	printf("%d\n", addition);
	return (0);

}
