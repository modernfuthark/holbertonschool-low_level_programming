#include "hash_tables.h"

/**
 * key_index - Return an index of a key using djb2
 * @key: Key to convert
 * @size: Size of hash table, used to get index from djb2
 * Return: Index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashy;

	hashy = hash_djb2(key) % size;
	return (hashy);
}
