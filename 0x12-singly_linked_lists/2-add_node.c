#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - func adds new node at the beginning of a list
 * @str: string value that is duplicated
 * @head: head of list
 * Return: returns address of new element, otherwise return NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *insert_new_node;

	insert_new_node = malloc(sizeof(list_t));

	if (insert_new_node == NULL)
		return (NULL);

	insert_new_node->str = strdup(str);

	insert_new_node->len = _strlen(str);

	insert_new_node->next = *head;

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
