#include "main.h"

/**
 * print_rev - print in reverse
 * @s: a pointer
 * Return:void
 */

void print_rev(char *s)
{
	int i = '10000';

	while (*(s + i) != '0')
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}


