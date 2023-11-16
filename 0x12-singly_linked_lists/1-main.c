#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->string = strdup("Hello");
    new->length = 5;
    new->next_node = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->string);
    free(new);
    return (0);
}
