#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: the string
 * @c: the character to be found
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
