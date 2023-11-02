#include "main.h"

/**
 * malloc_checked - main function that allocates memory
 * @b: This value represetnts the allocated memory
 *
 * Return: a ptr to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *bt;

	bt = malloc(b);

	if (bt == NULL)
		exit(98);

	return (bt);
}
