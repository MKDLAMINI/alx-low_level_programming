#include "hash_tables.h"

/**
 * hash_table_set - function adds element to hash table
 * @ht: ptr to hash table
 * @key: key value
 * @value: value paired with key
 * Return: 0 when it fails, otherwise return 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *unlock, *next_node;
	char *duplicate_value, *duplicate_key;
	unsigned long int index = 0;

	if (!ht || !key || !value)
		return (0);

	duplicate_value = strdup(value);

	if (!duplicate_value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	unlock = ht->array[index];

	while (unlock)
	{
		if (!strcmp(key, unlock->key))
		{
			free(unlock->value);
			unlock->value = duplicate_value;
			return (1);
		}
		unlock = unlock->next;
	}
	next_node = calloc(1, sizeof(hash_node_t));
	if (next_node == NULL)
	{
		free(duplicate_value);
		return (0);
	}
	duplicate_key = strdup(key);
	if (!duplicate_key)
		return (0);
	next_node->key = duplicate_key;
	next_node->value = duplicate_value;
	next_node->next = ht->array[index];
	ht->array[index] = next_node;
	return (1);
}
