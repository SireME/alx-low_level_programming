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
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");

		printf("Age: %f\n", (d->age) ? d->age : 0);

		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
