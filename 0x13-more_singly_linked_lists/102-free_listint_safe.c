#include "lists.h"
/**
 * free_listint_safe - function frees linked list
 * @h: ptr to linked list
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int k;
	listint_t *temp;

	if (!h || !*h)
		return  (0);

	while (*h)
	{
		k = *h - (*h)->next;
		if (k > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			listint_t *temp = *h;
			*h = NULL;
			free(temp);
			length++;
			break;
		}
	}

	return (length);
}
