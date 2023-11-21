#include "lists.h"
/**
 * reverse_listint - function reverses a linked list
 * @head: ptr of linked list
 * Return: returns ptr to the first node or reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prior_ptr, *next = NULL;
	listint_t *ongoing_ptr = *head;

	while (ongoing_ptr != NULL)
	{
		next = ongoing_ptr->next;
		ongoing_ptr->next = prior_ptr;
		prior_ptr = ongoing_ptr;
		ongoing_ptr = next;
	}
	*head = prior_ptr;

	return (*head);
}
