#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - This frees 2D grid.
 * @grid: 2D matrix
 * @height: input parameter
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
