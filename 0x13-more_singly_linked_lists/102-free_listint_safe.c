#include "lists.h"
/**
 * free_listint_safe - function frees linked list
 * @h: ptr to linked list
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int tar;
	listint_t *interim_ptr;

	if (!h || !*h)
		return  (0);

	while (*h)
	{
		tar = *h - (*h)->next;
		if (tar > 0)
		{
			interim_ptr = (*h)->next;
			free(*h);
			*h = interim_ptr;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
