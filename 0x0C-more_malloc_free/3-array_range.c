#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: Lowest value in range
 * @max: Maximum interger value in array
 * Return: array
 */
int *array_range(int min, int max)
{
	int array_size = max - min + 1;
	int *array = malloc(sizeof(int) * array_size);
	int i;
	
	if (max < min)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
