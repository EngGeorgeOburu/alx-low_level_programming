#include "hash_tables.h"
/**
 * key_index - Compute the index of a key in hash table.
 * @key: The key  to compute the index for.
 * @size: The size of the hash table.
 * Return: The computed index for the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Declare a variableto store the computed index */
	unsigned long int index = hash_djb2(key) % size;

	/* Return the computed key*/
	return (index);
}
