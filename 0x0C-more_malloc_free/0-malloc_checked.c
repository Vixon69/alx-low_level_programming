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
	char *i;
	int *j;
	int n = 98;
	j = &n;

	i = malloc(sizeof(char) * b);

	if (i == NULL)
	{
		free(i);
		return (j);
	}
	else
		return (i);

}
