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

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			break;
			printf("%d, ", a[i - 1]);
		}
		else
			printf("%d, ", a[i]);
	}
}
