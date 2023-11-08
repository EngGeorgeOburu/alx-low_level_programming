#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @size: array size
 * @action: pointer to the function
 * @array: Array of intergers
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
