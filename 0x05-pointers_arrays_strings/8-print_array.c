#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: the name of the array
 * @n: the input number
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;
	int size;
	int last;

	size = sizeof(*a) / sizeof(int);
	last = size - 1;

	for (i = 0; i <= n; i++)
	{
		if (i == last)
		{
			printf("%d ", last);
		}
		else
			printf("%d, ", a[i]);
	}
}
