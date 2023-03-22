#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to execute on
 * @size: size of array
 * @cmp: pointer to function to compare values
 *
 * Return: index of first element for which cmp != 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, cmp_value, cmp_i;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (1);

	if (cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cmp_value = cmp(array[i]);
			if (cmp_value != 0)
			{
				cmp_i = i;
				break;
			}

		}
	}
	return (cmp_i);

}
