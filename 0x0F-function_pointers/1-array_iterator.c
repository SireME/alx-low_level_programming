#include "function_pointers.h"

/**
 * array_iterator - execute function on each element of array
 * @array: array to execute on
 * @size: size of array
 * @action: pointer function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j = size;

	if (!action || !array)
		return;

	if (action != NULL)
	{
		for (i = 0; i < j; i++)
			action(array[i]);
	}

}
