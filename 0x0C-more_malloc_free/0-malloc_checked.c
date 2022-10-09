#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - write a function that allocates memory using malloc
 * @b: the size of the memory allocated
 * Return: print 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;
	unsigned int **j;

	i = malloc(sizeof(int) * b);

	if (i == NULL)
	{
		_putchar(9);
		_putchar(8);
		free(i);
	}
	j = &i;
	return (j);

}