#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  a function that free a 2 dimensional grid priveously
 * allocated to by your alloc_grid function
 * @grid:the grid to free
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
