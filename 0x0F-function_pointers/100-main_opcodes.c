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
	int size;

	int we;

	char *pop;

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

	pop = (char *)main;

	for (we = 0; we < size; we++)
	{
		if (we == size - 1)
		{
			printf("%02hhx\n", pop[we]);
			break;
		}
		printf("%02hhx", pop[we]);
	}
	return (0);

}

