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

	d = sizeof(s1) + sizeof(s2) - n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	f = malloc(d);

	if (f == NULL)
	{
		free (f);
		return (NULL);
	}

	for (i = 0; s1[i] < '\0'; i++)
	{
		f[i] = s1[i];
	}
	for (j = 0; f[i] < s2[n]; j++)
	{
		f[i] = s2[j];
	}

	return (f);
}

