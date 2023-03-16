#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocate memory using malloc.
 *@b: number of memory blocks.
 * Return: void or exit.
 */

void *malloc_checked(unsigned int b)

{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
