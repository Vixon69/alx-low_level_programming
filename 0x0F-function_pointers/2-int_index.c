#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first
 * element for which the cmp function does not return 0
 * @array: a pointer to the array
 * @size: the size of the array
 * @cmp:the function pointer
 * Return: returns and int on succesd and -1 else
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j, p;

	if (size <= 0)
		return (-1);

	if (!array || !size || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = array[i];
		p = cmp(j);

		if (j && p)
		{
			return (i);
		}
	}
	return (-1);
}
