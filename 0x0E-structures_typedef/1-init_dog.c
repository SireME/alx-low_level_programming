#include "dog.h"

/**
 * init_dog - initialize dogs
 *@d: pointer to struct dog type
 *@name: name of dog.
 *@age: age of dog.
 *@owner: dog owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
