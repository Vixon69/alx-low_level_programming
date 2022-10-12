#include "dog.h"
#include <stdlib.h>
#include "main.h"

/**
 * init_dog - initialization of the variable type struct dog
 * @struct dog: the varibale type
 * @name:the pointer to a char
 * @float: the age
 * @owner: the pointer to a char
 * @d:the array
 * Return: void
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
