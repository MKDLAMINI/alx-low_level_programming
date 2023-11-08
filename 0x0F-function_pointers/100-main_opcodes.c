#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function will print an opcode
 * @argv: This is the array
 * @argc: This value represents the arguments
 *
 * Return: will return 0 upon succession
 */
int main(int argc, char *argv[])
{
	int size, indicator;
	int (*location)(int, char **) = main;
	unsigned char rancode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (indicator = 0; indicator < size; indicator++)
	{
		rancode = *(unsigned char *)location;
		printf("%.2x", rancode);

		if (indicator == size - 1)
			continue;
		printf(" ");

		location++;
	}
	printf("\n");

	return (0);
}
