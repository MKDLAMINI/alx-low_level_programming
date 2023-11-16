#ifndef SING_LINK_LIST_H
#define SING_LINK_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

typedef struct list_s
{
	char *string;
	size_t length;
	struct list_s *next_node;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *string);
list_t *add_node_end(list_t **head, const char *string);
void free_list(list_t *head);
int _strlen(const char *k);

#endif
