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
	int i, j, **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}

	return (ar);
}
