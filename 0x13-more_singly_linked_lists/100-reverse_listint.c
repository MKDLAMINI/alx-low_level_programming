#include "lists.h"
/**
 * reverse_listint - function reverses a linked list
 * @head: ptr of linked list
 * Return: returns ptr to the first node or reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prior_ptr, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prior_ptr = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prior_ptr;
		prior_ptr = *head;
		*head = next;
	}
	*head = prior_ptr;
	return (*head);
}
