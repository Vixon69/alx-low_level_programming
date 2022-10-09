#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - write a function that allocates memory using malloc
 * @b: the size of the memory allocated
 * Return: print 98
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	if (malloc_checked < 0)
		_putchar('98');

	i = malloc(sizeof(unsigned int) * b);
	if (i == NULL)
	{
		_putchar(98);
		free(i);
	}
	else
		_putchar(i);
}
