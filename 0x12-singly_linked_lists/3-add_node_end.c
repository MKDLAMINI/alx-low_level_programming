#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - func adds new node at the end of a list
 * @head: points to linked list
 * @str: string is added to new node
 * Return: address to new element otherwise return NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *new_string;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_string = *head;
	while (new_string->next)
		new_string = new_string->next;
	new_string->next = new_node;
	return (new_node);
}
/**
 * _strlen - func prints length of string
 * @string: the string
 * Return: return len of string
 */
unsigned int _strlen(char *string)
{
	unsigned int r;

	for (r = 0; string[r]; r++)
		;
	return (r);
}
