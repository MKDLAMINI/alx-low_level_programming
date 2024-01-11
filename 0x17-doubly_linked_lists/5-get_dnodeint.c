#include "lists.h"

/**
 * get_dnodeint_at_index - function returns nth node
 * @head: pointer to head of list
 * @index: index of node starting from 0
 * Return: returns nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == size)
	return (temp);
	size++;
	temp = temp->next;
	}
	return (NULL);
}
