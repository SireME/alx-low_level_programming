#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search with jump search
 * @array: array to search
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: -1 if not found or index of value
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size), prev;
	int current = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (current < (int)size && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		current += step;
	}

	prev = current - step;
	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	if (current < (int)size - 1)
		current = current;
	else
		current = size - 1;

	while (prev < current && array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
	}

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
		return (prev);
	else
		return (-1);

}
