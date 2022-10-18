#include "varaidic_functions.h"

/**
 * print_numbers - Write a function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: the number of values entered into the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;
	va_start(nums, n);

	while (i < n)
	{
		printf("%d",va_arg(nums, int));
		if (separator != NULL)
		{
			printf("%c", separator);
		}
		i++;
	}
	_putchar('\n');
}