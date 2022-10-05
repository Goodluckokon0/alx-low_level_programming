#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimentional grid
 * @grid: multidimentional array of integers
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
