#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees a two dimensional grid
 * @grid: The first parameter of the function
 * @height: The second parameter of the function
 * Return: void
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
