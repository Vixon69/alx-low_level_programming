#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Write a function that searches a string for
 * any of a set of bytes.
 * @s: the string to locate from
 * @accept: the bytes to match against s
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
