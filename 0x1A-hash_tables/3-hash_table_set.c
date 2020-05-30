#include "hash_tables.h"

/**
 * hash_table_set - Create or update a hash value
 * @ht: Hash tablre
 * @key: Key
 * @value: Value to use
 * Return: 1 on success, 0 on error
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *new;
	char *cval;
	unsigned long int idx;

	if (!(*key) || !key || !ht || !value)
		return (0);

	cval = strdup(value);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = cval;
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->value = cval;
	new->next = NULL;
	new->key = strdup(key);

	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}
	return (1);
}
