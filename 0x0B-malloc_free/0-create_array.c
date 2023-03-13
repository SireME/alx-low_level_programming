#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  create array and initialize with charcater.
 *@size: size of input array.
 *@c: charcter to initialize array.
 * Return: pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	char *arc;
	int i, j = size;

	if (size == 0)
	{
		return (NULL);
	}
	arc = malloc(sizeof(char) * size);
	if (arc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		arc[i] = c;
	}
	return (arc);
}
