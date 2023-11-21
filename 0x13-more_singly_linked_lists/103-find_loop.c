#include "lists.h"
/**
 * find_listint_loop - function finds loop in linked list
 * @head: ptr to linked list
 * Return: address of node where loop begins, otherwise return NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *gradual = head;
	listint_t *rapid_fire = head;

	if (!head)
		return (NULL);

	while (gradual && rapid_fire && rapid_fire->next)
	{
		rapid_fire = rapid_fire->next->next;
		gradual = gradual->next;

		if (rapid_fire == gradual)
		{
			gradual = head;
			while (gradual != rapid_fire)
			{
				gradual = gradual->next;
				rapid_fire = rapid_fire->next;
			}
			return (rapid_fire);
		}
	}
	return (NULL);
}

