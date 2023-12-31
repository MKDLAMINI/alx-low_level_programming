#include "lists.h"
/**
 * add_nodeint - functions adds new node at the beginning  of list
 * @head: ptr to the node of the list
 * @n: information stored in new node
 * Return: address of new element, otherwise return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
