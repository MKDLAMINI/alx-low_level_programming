#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
/**
 * @n: Value of integer
 * @index: Node on the list
 * @next: pointer that points to the next node
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;
#endif
