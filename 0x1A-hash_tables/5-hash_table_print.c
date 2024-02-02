#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: A ptr to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *next_node;
	unsigned long int i;
	unsigned char print_hash = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (print_hash == 1)
				printf(", ");

			next_node = ht->array[i];
			while (next_node != NULL)
			{
				printf("'%s': '%s'", next_node->key, next_node->value);
				next_node = next_node->next;
				if (next_node != NULL)
					printf(", ");
			}
			print_hash = 1;
		}
	}
	printf("}\n");
}
