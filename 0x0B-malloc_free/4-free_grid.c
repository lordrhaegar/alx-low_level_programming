#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory
 * Description: frees a 2 dimensional grid
 * @grid: the 2 dimensional array
 * @height: rows of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
