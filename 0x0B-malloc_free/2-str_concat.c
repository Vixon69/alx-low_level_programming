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
	int i, j;

	char *ch, *ch2;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ch = (char *)malloc(sizeof(char) * (i));
	ch2 = (char *)malloc(sizeof(char) * (j + 1));


	if (ch == NULL)
		return (NULL);
	
	if (ch2 == NULL)
		return (NULL);

	if ((s1[0] == '\0') && (s2[0] == '\0'))
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			*ch = _putchar(s1[i]);
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			*ch2 = _putchar(s2[j]);
		}
	}
	return (NULL);
}
