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
	int i, j, f, size;

	char *ch;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	size = i + j;

	ch = (char *)malloc(sizeof(char) * (size + 1));

	if (ch == NULL)
		return (NULL);

	for (f = 0; s1[f] != '\0'; f++)
	{
		*ch = s1[f];
	}

	return (ch);



}
