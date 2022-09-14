#include "main.h"

/**
 * print_sign - print the signs.
 *
 *@n: an ascii character.
 *
 * Return: 0 if 0 ,1 if > 0,-1 if < 0.
 */
int print_sign(int n)
{
	char plus;
	char minus;
	char zero;

	if (n > 0)
	{
		plus = '43';
		_putchar (plus);
		return (1);
	}
	else if (n < 0)
	{
		minus = '45';
		_putchar (minus);
		return (-1);
	}
	else
	{
		zero = '48';
		_putchar (zero);
		return (0);
	}

}
