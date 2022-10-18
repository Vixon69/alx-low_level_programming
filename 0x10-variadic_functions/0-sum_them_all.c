#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all of its parameters
 * @n: the values to be added
 * Return: return 0 if n == 0 or the total of all the integers entered
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned i, Total;

	va_list numbers;

	va_start(numbers, n);

	Total = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i = va_arg(numbers, int))
	{
		Total += i;
	}
	va_end(numbers);
	return (Total);
}
