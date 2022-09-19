#include "main.h"

/**
 * swap_int - swap two integers
 * @a: ascii
 * @b: ascii
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
