#include "lists.h"

/**
 * sum_dlistint - function returns sum of n
 * @head: head of the list
 * @Return: returns sum of data of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_tally;
	sum_tally = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_tally += head->n;
			head = head->next;
		}
	}
	return (sum_tally);
}
