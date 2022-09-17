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

	for (i = 0; i < n; i++)
		_putchar('-');
	_putchar('\n');
}
