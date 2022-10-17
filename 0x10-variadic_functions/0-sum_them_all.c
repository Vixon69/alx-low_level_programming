#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all of its parameters
 * @n: the values to be added
 * Return: return 0 if n == 0 or the total of all the integers entered
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, Total;

	va_list numbers;

	va_start(numbers, n);

	Total = n;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i >= 0; i = va_arg(numbers, int))
	{
		Total += i;

	}
	va_end(numbers);
	return (Total);
}
