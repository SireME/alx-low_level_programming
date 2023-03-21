#include <stdio.h>
#include "dog.h"
#define NULL ((void *)0)
/**
 * print_dog - print dog presence,
 *determines if name, age or owner is NULl.
 *@d: pointer to dogs struct data type
 *
 * return: nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);

		if ((*d).age == 0)
			printf("Age: (nil)\n");
		else
			printf("Name: %f\n", (*d).age);

		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Name: %s\n", (*d).owner);
	}
}
