#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with key.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 * Return: The value associated with element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;
	/* Check if hash table, key, or key is empty */
	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	/* Calculates the index using hash functions */
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];
	/*Traverse the linked list at the computed index*/
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}
