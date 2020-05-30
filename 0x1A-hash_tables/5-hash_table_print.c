#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 * Return: Nothing, function is void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	int flag = 0;
	hash_node_t *at;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (!flag)
					printf(", ");
				at = ht->array[i];
				for (j = 0; at->next; j++)
				{
					printf("'%s': '%s'", at->key, at->value);
					at = at->next;
				}
			}
			flag = 1;
		}
		printf("}\n");
	}
}
