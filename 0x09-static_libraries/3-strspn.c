#include "main.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s:main string
 * @accept: the values to be matched
 * Return: no of byte in string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (i);
}
