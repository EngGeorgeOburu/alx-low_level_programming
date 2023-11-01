#include "main.h"
/**
 * free_grid - This frees 2D grid.
 * @grid: 2D matrix
 * @height: input parameter
 * Return 0 (success)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		free(grid);
	}
	free(grid);
}
