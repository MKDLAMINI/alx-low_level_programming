#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes node at index
 * @head: head of the list
 * @index: index of the new node 
 * Return: 1 otherwise -1 upon failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h_one;
	dlistint_t *h_two;
	unsigned int k;

	h_one = *head;

	if (h_one != NULL)
		while (h_one->prev != NULL)
			h_one = h_one->prev;

	k = 0;

	while (h_one != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = h_one->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h_two->next = h_one->next;

				if (h_one->next != NULL)
					h_one->next->prev = h_two;
			}
			free(h_one);
			return (1);
		}
		h_two = h_one;
		h_one = h_one->next;
		k++;
	}
	return (-1);
}
