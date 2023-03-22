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
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
