#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table
 * @ht: A ptr to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *delete_head = ht;
	hash_node_t *next_node, *tgv;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			next_node = ht->array[i];
			while (next_node != NULL)
			{
				tgv = next_node->next;
				free(next_node->key);
				free(next_node->value);
				free(next_node);
				next_node = tgv;
			}
		}
	}
	free(delete_head->array);
	free(delete_head);
}
