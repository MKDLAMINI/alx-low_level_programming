#include "lists.h"
/**
 * add_nodeint_end - function adds node to the end of list
 * @head: ptr to the new node
 * @n: information of the new node
 * Return: return address of new element, otherwise return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *interim = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (interim->next)
		interim = interim->next;

	interim->next = new_node;

	return (new_node);
}
