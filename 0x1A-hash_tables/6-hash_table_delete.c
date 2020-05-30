#include "hash_tables.h"

/**
 * helper - Remove a node through recursion since loops dont like me
 * @node: Node to free
 * Return: Nothing, function is void
 */

void helper(hash_node_t *node)
{
	if (node)
	{
		free(node->value);
		free(node->key);
		helper(node->next);
		free(node);
	}
}

/**
 * hash_table_delete - Delete a hash table
 * @ht: Hash table
 * Return: Nothing, function is void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			helper(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}
