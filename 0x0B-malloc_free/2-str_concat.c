#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - a function that concantenates
 * @s1: the first string
 * @s2: the string to be joined
 * Return: NULL on faliure and a pointer on success
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size;

	char *ch;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	size = i + j + 1;

	ch = (char *)malloc(sizeof(char) * (size));


	if (ch == NULL)
		return (NULL);

	if ((s1[0] == '\0') && (s2[0] == '\0'))
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			*ch = printf("%c%c", s1[i], s2[i]);
		}
		return (ch);

	}
	return (NULL);
}
