#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2d array of integers.
 *
 * @width: int width of the grid.
 *
 * @height: int height of the grid.
 *
 * Return: NULL or 0
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	h = 0;
	while (h < height)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			w = 0;
			while (w < h)
			{
				free(grid[w]);
				w++;
			}
			free(grid);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
