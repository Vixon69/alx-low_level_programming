#include <stdio.h>
#include "main.h"

/**
 * mul: multiply 2 integer
 *
 * @a: Ascii
 * @b: Ascii
 *
 * Return: 0
 */
int mul(int a, int b)
{
	int multiply;

	multiply = (a * b);

	printf("%d * %d = %d\n", a, b multiply);

	return (0);
}
