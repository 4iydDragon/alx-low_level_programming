#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2d grid created by alloc_grid.
 *
 * @grid: int **grid to be freed.
 *
 * @height: int height of the grid.
 *
 * Return: NULL or 0
 */

void free_grid(int **grid, int height)
{
	int h;

	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
