#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concantenates
 * @s1: the first string
 * @s2: the string to be joined
 * Return: NULL on faliure and a pointer on success
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, g, size;

	char *ch;
	g = 0;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	size = i + j;

	ch = (char *)malloc(sizeof(char) * (size + 1));

	if (ch == NULL)
		return (NULL);

	while (g >= 0)
	{
		*ch = s1[i] + s2[g];

		if (s2[g] == '\0')
		{
			break;
		}
		i++;
		g++;
	}

	return (ch);



}
