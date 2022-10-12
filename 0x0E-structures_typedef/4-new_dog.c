#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - write a function that creates a new dog
 * @name: name of the dog
 * @age: the dogs age
 * @owner: the owner of the dog
 * Return: pointer or null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *storage;
	
	if (new_dog == NULL)
		return (NULL);

	storage = malloc(sizeof(name) + sizeof(owner));

	if (storage == NULL)
	{
		return (NULL);
	}

	strcpy(storage, name);
	strcpy(storage,owner);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return(new_dog);
}
