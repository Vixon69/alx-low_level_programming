#include "main.h"

/**
 * _strcat - write a function that concantenates two strings
 * @dest: the destination
 * @src: the word to be appended
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	for (; i <= dest['\0']; i++)
	{
		_putchar(dest[i]);

		if (i == '\0')
		{
			i = 0;
			for (; i <= src['\0']; i++)
			{
				_putchar(src[i]);
			}
		}
	}
	return (dest);
}
