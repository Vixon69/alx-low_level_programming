#include "main.h"
/**
 * print_diagsums - Write a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: the array name
 * @size: the number of bytes
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int result = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (a == *(*(a + i) + j))
			{
				result = *(*(a + i) + j);
				_putchar(result);
			}
			_putchar('\n');
		}
	}
}
