#include "lists.h"
/**
 * lst_len - returns num of elements in linked list
 * @h: ptr in list func
 * Return: returns node count
 */
size_t list_len(const list_t *h)
{
	size_t integer_tally = 0;

	while (h)
	{
		integer_tally++;

		h = h->next;
	}
	return (integer_tally);
}
