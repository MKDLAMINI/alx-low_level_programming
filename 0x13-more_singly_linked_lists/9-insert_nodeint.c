#include "lists.h"
#include <signal.h>
/**
 * insert_nodeint_at_index - function inserts new node at given position
 * @idx: value where new node should be added, starting at 0
 * @head: ptr to linked list
 * @n: new node where information is kept
 * Return: address of new node otherwise return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *interim_ptr = *head;
	unsigned int tar;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (tar = 0; interim_ptr && tar < idx; tar++)
	{
		if (tar == idx - 1)
		{
			new_node->next = interim_ptr->next;
			interim_ptr->next = new_node;
			return (new_node);
		}
		else
			interim_ptr = interim_ptr->next;
	}
	return (NULL);
}
