#include "lists.h"
/**
 * pop_listint - function deletes head node in linked list
 * @head: ptr to linked list
 * Return: head of node data, if linked list empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *interim_ptr;
	int integer_tally;

	if (!head || !*head)
		return (0);

	integer_tally = (*head)->n;
	interim_ptr = (*head)->next;
	free(*head);
	*head = interim_ptr;

	return (integer_tally);
}
