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
	int n = 0;

	while (n != '\0')
	{
		i++;
		_putchar(dest[i]);

		if (i == dest['\0'])
		{
			_putchar(' ');
			for (; n <= src['\0']; n++)
			{
				_putchar(src[n]);
			}
			_putchar('\n');
			if (n == '\0')
			{
				for (n = 0; n <= src['\0']; n++)
				{
					_putchar(src[n]);
				}
				_putchar('\n');
				while (n != '\0')
				{
					i++;
					_putchar(dest['\0']);

					if (i == dest['\0'])
					{
						_putchar(' ');
						for (n = 0; n <= src['\0']; n++)
						{
							_putchar(src[n]);
						}
					}
				}
			}
		}
	}
	return (dest);
}
