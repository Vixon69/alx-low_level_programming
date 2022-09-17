#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbers, from 0 to 9
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == 2 || n == 4)
		{
			n++;
			_putchar(n);
		}
		_putchar('\n');
	}

}
