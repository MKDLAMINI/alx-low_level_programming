#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - func releases a list
 * @head: points to first node of a list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
