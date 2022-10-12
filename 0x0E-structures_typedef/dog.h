#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct contaning the info about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Define a new type struct dog with the following
 * elements: name,owner and age.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
