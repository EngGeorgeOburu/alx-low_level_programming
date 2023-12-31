#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize variable of type struct dog
 * @d: dogs structure
 * @name: Dog's name
 * @age: Age of the Dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
