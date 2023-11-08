#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - This function will print operations
 * @argv: points to an argument
 * @argc: These are arguments parsed in the function
 *
 * Return: will return 0 when successful
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int integer_1;

	int integer_2;

	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	integer_1 = atoi(argv[1]);
	op = argv[2];
	integer_2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && integer_2 == 0) || (*op == '%' && integer_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(integer_1, integer_2));

	return (0);
}
