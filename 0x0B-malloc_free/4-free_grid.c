#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  free 2d array of integers.
 *@grid: 2d array of ints to free.
 *@height: height of grid.
 * Return: nada.
 */

void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
