#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints strings, followed by a new line.
 *
 * @separator: where separator is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	unsigned int i = 0;

	va_start(words, n);

	while (i < n)
	{
		if (i + 2 == n)
			break;

		if (va_arg(words, char*) != NULL)
		{
			printf("%s", va_arg(words, char*));
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(words);
}
