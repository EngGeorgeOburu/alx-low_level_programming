#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array using malloc.
 * @total: Total size of bytes
 * @array: The array allocating memory to
 * Return: Array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total = nmemb * size;
	char * array = malloc(total);

	while (array == NULL)
	{
		return (NULL);
	}
	memset(array, 0, total);
	return (array);
}

