#include "hash_tables.h"

/**
 * key_index - Give you the index of a key
 * @key: The key
 * @size: Size of array of the hash table
 *
 * Return: Key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
