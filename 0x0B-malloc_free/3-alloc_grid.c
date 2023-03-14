#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  create 2d pointer.
 *@width: width of pointer.
 *@height: height of pointer.
 * Return: 2d pointer.
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	int*** ar = malloc(width * sizeof(int**));
	for (i = 0; i < width; i++)
		ar[i] = malloc(height * sizeof(int *));


	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			ar[i][j] = 0;
	}

	return (ar);
}
