#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: the string
 * @c: the character to be found
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (i != '\0')
	{
		for (; i <= s['\0']; i++)
		{
			if (s[i] == c)
			{
				return (s);
			}
		}
		return (s);
	}
	return (0);
}
