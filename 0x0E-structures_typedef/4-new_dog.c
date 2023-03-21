#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of dog
 *
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = strlen(name) + 1;
		own_l = strlen(owner) + 1;
		n_dog = malloc(sizeof(dog_t));

		if (n_dog == NULL)
			return (NULL);

		n_dog->name = malloc(sizeof(char) * name_l);

		if (n_dog->name == NULL)
		{
			free(n_dog);
			return (NULL);
		}

		n_dog->owner = malloc(sizeof(char) * own_l);

		if (n_dog->owner == NULL)
		{
			free(n_dog->name);
			free(n_dog);
			return (NULL);
		}

		n_dog->name = strcpy(n_dog->name, name);
		n_dog->owner = strcpy(n_dog->owner, owner);
		n_dog->age = age;
	}

	return (n_dog);
}
