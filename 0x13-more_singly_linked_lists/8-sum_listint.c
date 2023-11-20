#include "lists.h"
/**
 * sum_listint - function returns sum of all data of linked list
 * @head: ptr to linked list
 * Return: return 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int value_of_sum = 0;
	listint_t *interim_ptr = head;

	while (interim_ptr)
	{
		value_of_sum += interim_ptr->n;
		interim_ptr = interim_ptr->next;
	}
	return (value_of_sum);
}
