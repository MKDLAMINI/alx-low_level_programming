#include "hash_tables.h"

/**
 * key_index - function gives you the index of a key
 * @key: The key of the index
 * @size: array of the hash table
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
