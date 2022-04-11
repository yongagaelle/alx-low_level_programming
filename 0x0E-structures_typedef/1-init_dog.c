#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: pointer to name
 * @age: age
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
