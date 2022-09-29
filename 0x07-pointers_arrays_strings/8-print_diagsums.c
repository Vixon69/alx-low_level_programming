#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: the array name
 * @size: the number of bytes
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, j2 = 0;

	for (i = 0; i < size; i++)
	{
		j += *(a + (size * i + i));
		j2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", j);
	printf("%d\n", j2);
}
