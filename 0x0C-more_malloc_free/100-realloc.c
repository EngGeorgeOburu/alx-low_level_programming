#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: POinter to memory
 * @old_size: bytes allocated for ptr space
 * @new_size: bytes of the new memory block
 *
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	p = malloc(new_size);
	if (new_size > old_size)
	{
		return (malloc(new_size));
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

		memcpy(p, ptr, least_size);
		free(ptr);
	}
	return (p);
}

