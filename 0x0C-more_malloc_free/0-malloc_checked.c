#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - write a function that allocates memory using malloc
 * @b: the size of the memory allocated
 * Return: print 98
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		free(i);
		exit(98);
	}
	else
		return (i);

}
