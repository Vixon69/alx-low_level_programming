#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of int
 * @min: the minimum starting value
 * @max: the maximum value to end
 * Return: NULL or a pointer
 */

int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);

}
