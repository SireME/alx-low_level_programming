#include "search_algos.h"
/**
 * binary_search - implementation of a binary search algorithm
 * @array: array to search through
 * @size: size of array
 * @value: value to search for in array
 * Return: failue: -1 or index location
 **/

int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = (int) size - 1, mid;
	int i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		/* print array and sub arrays*/
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (end == i)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		mid = (start + end) / 2;

		if (array[mid] == value)
			return (mid);

		if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}
