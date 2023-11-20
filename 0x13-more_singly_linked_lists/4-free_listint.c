#include "lists.h"
/**
 * free_listint - function frees a list
 * @head: ptr to linked list
 */
void free_listint(listint_t *head)
{
	listint_t *interim_ptr;

	while (head)
	{
		interim_ptr = head->next;
		free(head);
		head = interim_ptr;
	}
}
