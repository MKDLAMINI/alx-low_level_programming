#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: Pointer to the hash table
 * @key: Key to look for in the hash table
 *
 * Return: The value associated with the key, or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *unlock;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	unlock = ht->array[index];

	while (unlock)
	{
		if (!strcmp(key, unlock->key))
			return (unlock->value);
		unlock = unlock->next;
	}
	return (NULL);
}
