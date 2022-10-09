#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concantenates 2 strings.
 * @s1: string 1
 * @s2: string 2
 * @n: the number of strings
 * Return: NULL or a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *f;
	int d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	d = sizeof(s1) + sizeof(s2) - n;

	f = malloc(d);

	if (f == NULL)
	{
		free(f);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		f[i] = s1[i];
	}
	for (j = 0; f['\0'] != s2[n]; j++)
	{
		f['\0'] = s2[j];
	}

	return (f);
}

