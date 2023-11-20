#include "lists.h"
/**
 * free_listint2 - function frees a list
 * @head: ptr to linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *interim_ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		interim_ptr = (*head)->next;
		free(*head);
		*head = interim_ptr;
	}
	*head = NULL;
}
