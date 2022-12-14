#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Write a function that returns a pointer to a newly
 *  allocated space in memory
 * , which contains a copy of the string given as a parameter.
 * @str: the string to be copied
 * Return: on success returns a pointer and NULL otherwise
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	ch = (char *)malloc(sizeof(char) * (i + 1));

	if (ch == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		ch[j] = str[j];
	}

	return (ch);
}
