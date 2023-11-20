#include "lists.h"
/**
 * delete_nodeint_at_index - function deletes node at index of linked list
 * @head: ptr to linked list
 * @index: index of node should be deleted
 * Return: return 1 upon success otherwise return -1 upon failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *interim_ptr = *head;
	listint_t *used_ptr = NULL;
	unsigned int tar = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(interim_ptr);
		return (1);
	}
	while (tar < index - 1)
	{
		if (!interim_ptr || !(interim_ptr->next))
			return (-1);
		interim_ptr = interim_ptr->next;
		tar++;
	}

	used_ptr = interim_ptr->next;
	interim_ptr->next = used_ptr->next;
	free(used_ptr);
	return (1);
}
