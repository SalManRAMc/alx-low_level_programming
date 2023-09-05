#include "main.h"

/**
 * free_grid - frees memory grid
 *
 * @grid: the grid
 * @height: row number
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
