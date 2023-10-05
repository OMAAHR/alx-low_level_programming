#include "main.h"

/**
 * free_grid - function that frees grid
 * @grid: parameter 1
 * @height: para 2
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
