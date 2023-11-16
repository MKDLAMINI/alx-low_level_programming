#include "lists.h"
/**
 * print_list - This func returns elements of a list
 * @h: points to the list
 * Return: Num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t integer_tally = 0;

	while (h)
	{
		if (!h->string)
		printf("[0] (nil)\n");
		else
		printf("[%lu] %s\n", h->length, h->string);
		h = h->next;
		integer_tally++;
	}
	return (integer_tally);
}
