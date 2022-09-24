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

	while (i != '\0')
	{
		i++;
		_putchar(dest[i]);

		if (i == dest['\0'])
		{
			_putchar(' ');
			i = 0;
			for (; i <= src['\0']; i++)
			{
				_putchar(src[i]);
			}
			_putchar('\n');

		}
	}
	return (dest);
}
