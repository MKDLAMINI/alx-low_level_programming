#include "lists.h"
/**
 * recurring_loop_listint_len - function establishes total tally of nodes
 * @head: ptr of a linked list
 * Return: return 0 if linked list does not loop
 */
size_t recurring_loop_listint_len(const listint_t *head)
{
	size_t tally_node = 1;
	const listint_t *gradual;
	const listint_t *rapid_fire;

	if (head == NULL || head->next == NULL)
		return (0);

	gradual = head->next;
	rapid_fire = (head->next)->next;

	while (rapid_fire)
	{
		if (gradual == rapid_fire)
		{
			gradual = head;
			while (gradual != rapid_fire)
			{
				tally_node++;
				gradual = gradual->next;

				rapid_fire = rapid_fire->next;
			}
			gradual = gradual->next;
			while (gradual != rapid_fire)
			{
				tally_node++;
				gradual = gradual->next;
			}
			return (tally_node);
		}
		gradual = gradual->next;
		rapid_fire = (rapid_fire->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function prints a linked list
 * @head: ptr to head of linked list
 * Return: return number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t tally_node, new_placement = 0;

	tally_node = recurring_loop_listint_len(head);

	if (tally_node == 0)
	{
		for (; head != NULL; tally_node++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (new_placement = 0; new_placement < tally_node; new_placement++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (tally_node);
}
