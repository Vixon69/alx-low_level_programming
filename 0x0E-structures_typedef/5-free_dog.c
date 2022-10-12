#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: the array
 * Return: void
 */

void free(dog_t *d)
{
	if(d == NULL)
	{
		free(d);
	}
}
