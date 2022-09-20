#include "main.h"

/**
 * print_rev - print in reverse
 * @s: a pointer
 * Return:void
 */

void print_rev(char *s)
{
	int i = '\0';

	while (*(s + i) != 1)
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
