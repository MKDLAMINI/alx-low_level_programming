#include "lists.h"
/**
 * listint_len - function returns number of elements in a linked list
 * @h: ptr to linked list
 * Return: returns number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t integer_tally = 0;

	while (h)
	{
		integer_tally++;
		h = h->next;
	}
	return (integer_tally);
}
