#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialization of the variable type struct dog
 * @name:the pointer to a char
 * @age: the age
 * @owner: the pointer to a char
 * @d:the array
 * description: the stuct is for a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
