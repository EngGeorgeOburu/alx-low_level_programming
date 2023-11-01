#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function that returns 2D array of intgers.
 * @width: First input parameter
 * @height: Second input parameter
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int **matrix = malloc(width *sizeof(int));

	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(height *sizeof(int));
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matrix[j]);
			}+

			return (NULL);
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
		}
	}
	return (matrix);
}
	
