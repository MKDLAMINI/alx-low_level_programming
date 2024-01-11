#include "lists.h"

/**
 * dlistint_len - function returns number of elements in list
 * @h: head of the list
 * Return: returns number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int tally;
	tally = 0;

	if (h == NULL)
		return (tally);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		tally++;
		h = h->next;
	}
	return (tally);
}
