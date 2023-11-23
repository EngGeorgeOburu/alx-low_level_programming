#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index to be set
 * Return: 1 if successful, -1 if unsuccessful
 */
int set_bit(unsigned long int*n, unsigned int index)
{
	unsigned long int position;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	position = 1 << index;
	*n = *n | position;
	return (1);
}
