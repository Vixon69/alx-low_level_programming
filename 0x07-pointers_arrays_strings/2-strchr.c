#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: the string
 * @c: the character to be found
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != s['\0']; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (0);

}
