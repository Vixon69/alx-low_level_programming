#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns a pointer to a 2 dimensional array of integers.
 * @width: the row
 * @height: the column
 * Return:a pointer on success or null on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ch;

	if (width || height == 0)
	{
		return (NULL);
	}

	ch = malloc(sizeof(int) * (height * width + 1));

	if (ch == NULL)
	{
		free (ch);
		return (NULL);
	}

	for (i = 0; i <= width; i++)
	{
		for (j = 0; j <= height; j++)
		{
			*ch[j] = j;
		}
		*ch[i] = i;
	}
	return (ch);

}
