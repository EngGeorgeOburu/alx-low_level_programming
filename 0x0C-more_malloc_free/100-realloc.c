#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memory block using malloc and free
 * @p: allocating memory to new size
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	p = malloc(new_size);
	if (new_size > old_size)
	{
		return;
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		size_t least_size = (old_size < new_size);

		memcpy(p, new_size, least_size);
		free(ptr);
	}
	return (p);
}

