#include "search_algos.h"

/**
 * interpolation_search - interpolation search alogrithm
 * @array: array to search thorugh
 * @size: size of array
 * @value: value to search for in array
 * Return: index of value or -1 on failure
 **/


int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos, division;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		division = (double)(high - low) / (array[high] - array[low]);
		pos = low + ((division) * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
