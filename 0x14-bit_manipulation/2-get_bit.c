#include <stdio.h>
#include "main.h"
/**
 * get_bit - Returns the value of a bit at given index
 * @n:
 * @index: Starting index
 * Return: Return value of index if successful, or -1 upon error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;
	unsigned int shifted = >> index;

	int bit_value = shifted &1;
	
	return (bit_value);
}

