#include "main.h"
/**
 * print_line - print line n times
 *
 * @n: An ascii value
 *
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('\n');
	}

	for (i = 1; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
