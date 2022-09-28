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
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{

				return (s);
			}
			accept++;
		}
		s++;
	}
	return (NULL);
}
