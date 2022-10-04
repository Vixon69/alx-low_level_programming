#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char and initilize it with a specific char
 * @size: size of array
 * @c: the char to be initialized
 * Return: NULL if size = 0 and pointer if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}

	return (cr);

}
