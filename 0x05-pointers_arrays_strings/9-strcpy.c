#include "main.h"

/**
 * _strcpy - write a function that copies the string pointed to by src
 * @dest:return value
 * @src:pointed to
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i); i++)
	{
		dest[i] = *(src + i);
	}

	return (dest);
}
