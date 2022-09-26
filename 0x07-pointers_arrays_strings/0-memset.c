#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: the memory address
 * @b: the byte
 * @n: the number of times
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j;

	i = *(&s + 1) - s;

	if (i <= n)
	{
		for (j = 0; j != n; j++)
		{
			*(s + j) = b;
		}
	}
	return (s);
}
