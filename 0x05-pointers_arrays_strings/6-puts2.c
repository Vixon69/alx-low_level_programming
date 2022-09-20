#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 *  starting with the first character, followed by a new line.
 *  @str: pointer
 *  Return: void
 */
void puts2(char *str)
{
	int n;

	n = 0;

	while (str[n] != '\0')
	{
		n++;
		if (n % 2 != 0)
		{
			n++;
			_putchar(str[n]);
		}
	}
}
