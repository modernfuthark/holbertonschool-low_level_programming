#include "hash_tables.h"

/**
 * hash_table_get - Get the value of a key
 * @ht: Hash table
 * @key: Key to index
 * Return: Value of key, NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (!(*key) || !key || !ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
