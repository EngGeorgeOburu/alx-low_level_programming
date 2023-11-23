#include <stdio.h>
#include "main.h"
/**
 * clear_bit - Sets the value of a bit to zero
 * @index: Index to be set
 * @n:integer parameter
 * Return: 1 if successful, -1 upon error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	while ((*n & (1UL << index)) != 0)
	{
		*n ^= (1UL << index);
	}
	return (1);
}


