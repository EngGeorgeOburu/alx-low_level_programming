#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: number of elements in array
 * @size: Size of each element in an array
 * Return: Array or NULL on failure
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

