#include "main.h"
/**
 * print_last_digit - print the last digit of a num.
 *
 * @j: an ascii letter
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int j)
{
	int last = j % 10;

	if (j < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
