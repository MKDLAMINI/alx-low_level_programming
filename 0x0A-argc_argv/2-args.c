#include <stdio.h>
#include "main.h"

/**
 * main - This function will execute any argument that it is given
 * @argc: This stores the number of arguments
 * @argv: This stores the array of arguments
 *
 * Return: This will return 0 upon successful file execution
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}

	return (0);

}
