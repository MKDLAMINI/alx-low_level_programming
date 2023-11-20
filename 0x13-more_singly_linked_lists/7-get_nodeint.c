#include "lists.h"
/**
 * get_nodeint_at_index - function returns nth node of a list
 * @index: index of node starting at 0
 * @head: ptr of linked list
 * Return: return 0 otherwise return NULL, if node is nonexistent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *interim_ptr = head;
	unsigned int tar = 0;

	while (interim_ptr && tar < index)
	{
		interim_ptr = interim_ptr->next;
		tar++;
	}
	return (interim_ptr ? interim_ptr : NULL);
}
