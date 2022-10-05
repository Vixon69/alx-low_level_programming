#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **buffer;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	buffer = malloc(height * sizeof(int *));
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(width * sizeof(int));
		if (buffer[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(buffer[i]);
			free(buffer);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;

	return (buffer);
}
