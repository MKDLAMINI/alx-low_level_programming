#include "lists.h"
/**
 * add_node - func adds new node at the beginning of a list
 * @string: string value that is duplicated
 * @head: head of list
 * Return: returns address of new element, otherwise return NULL
 */
list_t *add_node(list_t **head, const char *string)
{
	list_t *insert_new_node;

	insert_new_node = malloc(sizeof(list_t));

	if (insert_new_node == NULL)
		return (NULL);

	insert_new_node->string = strdup(string);

	insert_new_node->length = _strlen(string);

	insert_new_node->next_node = *head;

	*head = insert_new_node;

	return (insert_new_node);
}
/**
 * _strlen - func prints length of a string
 * @k: k is a a const char
 * Return: return p
 */
int _strlen(const char *k)
{
	int p = 0;

	while (k[p] != '\0')
	{
		p++;
	}
	return (p);
}
