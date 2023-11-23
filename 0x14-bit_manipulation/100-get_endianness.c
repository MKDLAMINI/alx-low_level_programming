#include "main.h"
/**
 * get_endianness - function that checks endianness
 * Return: 0 is successful, otherwise return 1 upon error
 */
int get_endianness(void)
{
	char *t;
	int p;

	p = 1;
	t = (char *)&p;

	return (*t);
}
