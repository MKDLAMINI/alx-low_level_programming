#include "lists.h"
/**
 * free_listw2 - function frees linked list
 * @head: ptr to linked list
 */
void free_listw2(listw_t **head)
{
	listw_t *temp;
	listw_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - function frees linked list
 * @h: ptr to linked list
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t dnodes = 0;
	listw_t *pptr, *new, *sum;
	listint_t *current;

	pptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listw_t));

		if (new == NULL)
			exit(98);

		new->w = (void *)*h;
		new->next = pptr;
		pptr = new;

		sum = pptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->w)
			{
				*h = NULL;
				free_listw2(&pptr);
				return (dnodes);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		dnodes++;
	}
	*h = NULL;
	free_listw2(&pptr);
	return (dnodes);
}
