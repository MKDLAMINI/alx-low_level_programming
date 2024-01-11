#include "lists.h"

/**
 * free_dlistint - function releases dlistint_t list
 * @head: a pointer to head of lisyt
 * Return: do not return
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
