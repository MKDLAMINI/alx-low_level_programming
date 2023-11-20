#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_listint - This function prints all elements of a list
 * @h: element to be printed
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t integer_value = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		integer_value++;
		h = h->next;
	}

	return (integer_value);
}
