#include "main.h"
#include "dog.h"

/**
 * init_dog - initialization of the variable type struct dog
 * @struct dog: the varibale type
 * @name:the pointer to a char
 * @float: the age
 * @owner: the pointer to a char
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d = {.*name = name, .age = age, .*owner = owner};
	return (0);
}
