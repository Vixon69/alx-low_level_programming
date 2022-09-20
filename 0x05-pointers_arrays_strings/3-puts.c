#include "main.h"

/**
 * _puts - a function that prints a string with a newline
 * @str: a pointer
 * return: 0
 */

void _puts(char *str)
{
	int n = 0;

	while ((str[n]) != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_puthchar('\n');

	return (0);
}
