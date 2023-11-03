#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using memory
 * @b: The total number of bytes to allocate
 * Return: Poiter to allocated memory, or
 * exit (98) on failure.
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
	{
		exit (98);
	}
	return (c);
}
