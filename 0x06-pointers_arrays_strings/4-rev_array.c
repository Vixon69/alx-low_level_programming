#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: an array of intergers
 * @n: the number elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 1;
	int b = 0;

	while (i != n)
	{
		b = n - i;
		_putchar(a[b]);
		i++;
	}

	while (i != n)
	{
		b = n + i;
		_putchar(a[b]);
		i++;
	}
	_putchar('\n');
}
