#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: the destination
 * @src: the source of the byte
 * @n:the number of byte to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
