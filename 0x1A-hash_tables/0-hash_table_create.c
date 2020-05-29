#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of size size
 * @size: Size of table to create
 * Return: Empty hash table, NULL on error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
