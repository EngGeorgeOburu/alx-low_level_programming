#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: Pointer or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;/* Pointer to the hash table */
	unsigned long int i;
	
	ht = malloc(sizeof(hash_table_t));/* Allocate memory for hash tables*/
	if (ht == NULL)
		return (NULL);/*Return NULL if malloc fails*/
	ht->array = malloc(sizeof(hash_table_t *) * size);/*Alocate memeory\
							    for the array*/
	if (ht->array == NULL)
	{
		free(ht);/*free previosly allocated memory*/
		return (NULL);/*Return NULL if malloc fails*/
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;/*Initializes each element of the array to NULL*/
	ht->size = size;/*assign the size of the array*/
	return (ht);/*Return pointer to the hash table*/
}
