#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: Array to search in
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: -1 when no elements matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
