#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given
 * as a parameter on each element of an array.
 * @array: the name of the array
 * @size: the size of the array
 * @action: the pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	int j;

	if (!array || !size || !action)
		return;

	for (i = 0; i != size; i++)
	{
		j = array[i];
		action(j);
	}
}
