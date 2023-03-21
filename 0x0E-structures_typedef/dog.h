#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure to take in dog values.
 *@name: dog name.
 *@age: age of dog.
 *@owner: owner of dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
