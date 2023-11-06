#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates the new dog
 * @name: Name of the dog
 * @age: Dogs age
 * @owner: Dog;s owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));
	if (!name || !owner)
	{
		return (NULL);
	}
	if (!newdog)
	{
		return (NULL);
	}
	newdog->owner = strdup(owner);
	
	if (!newdog)
	{
	free(newdog->name);
	free(newdog);
	return (NULL);
	}
	newdog->age = age;
	
	return (newdog);
}	
