#include "main.h"

/**
* free_grid - free a 2d array.
* @grid: array.
* @height: the height of the array.
* Return: Always 0.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
