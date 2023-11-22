#include "lists.h"
/**
 * free_listw - function frees linked list
 * @head: ptr to linked list
 */
void free_listw(listw_t **head)
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
 * print_listint_safe - function prints a linked list
 * @head: ptr to linked list
 *
 * Return: tally of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t dnodes = 0;
	listw_t *pptr, *new, *sum;

	pptr = NULL;
	while (head != NULL)
	while (head != NULL)
	{
		new = malloc(sizeof(listw_t));

		if (new == NULL)
			exit(98);

		new->w = (void *)head;
		new->next = pptr;
		pptr = new;

		sum = pptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->w)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listw(&pptr);
				return (dnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		dnodes++;
	}
	free_listw(&pptr);
	return (dnodes);
}
