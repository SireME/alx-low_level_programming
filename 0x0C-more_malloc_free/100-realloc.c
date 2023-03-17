#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocate memory.
 * @ptr: old memory block to reallocate.
 *@old_size: size of pointer to reallocate.
 *@new_size: new size of pointer to be reallocated to.
 * Return: new reallocated pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	void *nmem;
	unsigned int i;

	if (ptr == NULL) /* instance in which ptr is NULL*/
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL) /*instance: new_size 0, ptr not NULL*/
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size) /*instance of both sizes equal*/
		return (ptr);

	nmem = malloc(new_size); /*allocate memory*/
	if (nmem == NULL) /*ensure memory return is not NULL*/
		return (NULL);

	for (i = 0; i < old_size; i++) /*initialise memory with ptr values*/
		*((char *)(nmem) + i) = *((char *)(ptr) + i);

	free(ptr);
	return (nmem);
}
