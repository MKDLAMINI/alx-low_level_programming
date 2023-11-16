#include "lists.h"
/**
 * print_list - This func returns elements of a list
 * @h: points to the list
 * Return: Num of nodes
 */
size_t print_list(const list_t *h)
{
	int integer_tally = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		integer_tally++;
		h = h->next;
	}
	return (integer_tally);
}
