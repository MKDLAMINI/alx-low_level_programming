#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - chooses func to operate desired by user
 * @s: This is the operator passed as an argument
 *
 * Return: returns a ptr to desired function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int n = 0;

	while (ops[n].op != NULL && *(ops[n].op) != *s)

	n++;

	return (ops[n].f);
}
