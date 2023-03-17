#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  function to allocate memory using malloc.
 *@nmemb: number of elements.
 *@size: size of a byte.
 * Return: NULL on failure or pointer of memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb); /*allocate memory*/
	if (arr == NULL) /*ensure memory return is not NULL*/
		return (NULL);

	for (i = 0; arr[i]; i++) /*initialise memory with zero*/
		arr[i] = 0;

	return ((void *) arr); /*typecast memory to a pointer*/
}
