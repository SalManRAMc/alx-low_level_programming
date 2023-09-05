#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - make a two dimensional array, initialised with zeros
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return: Null on failure, pointer to grid on success
 */

int **alloc_grid(int width, int height)
{
	int **mainarr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mainarr = malloc(height * sizeof(int));
	if (mainarr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mainarr[i] = malloc(width * sizeof(int));
		if (mainarr[i] == NULL)
		{
			printf("Memory Allocation Failed");
			return (NULL);
		}
	}
	
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			mainarr[i][j] = 0;
	return (mainarr);
}
