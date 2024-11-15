#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2 dimens grid prev created
 * @grid: - the grid to free
 * @height: - height to free
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
