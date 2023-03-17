#include "main.h"
#include <stdlib.h>

/**
 * array_range -  create an array of integers.
 *@min: minimum integer.
 *@max: maximum integer.
 * Return: pointer to array.
 */

int *array_range(int min, int max)

{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1)); /*allocate memory*/
	if (arr == NULL) /*ensure memory return is not NULL*/
		return (NULL);

	for (; min <= max; min++) /*initialise memory with values*/
		arr[i++] = min;

	return (arr);
}
