#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  function to allocate memory using malloc.
 *@nmemb: number of elements.
 *@size: size of a byte.
 * Return: NULL on failure or pointer of memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb); /*allocate memory*/
	if (arr == NULL) /*ensure memory return is not NULL*/
		return (NULL);


	for (i = 0; i < (size * nmemb); i++) /*initialise memory with zero*/
		*((char *)(arr) + i) = 0;

	return (arr);
}
