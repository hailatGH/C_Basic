#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: the grid.
 * @height: height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
