#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - It takes two arguments
 * It frees a 2 dimensional grid previously created by your alloc_grid function
 * @grid: grid to free
 * @height: height of grid
 * Return: returns void
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
