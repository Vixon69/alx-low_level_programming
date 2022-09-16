#include "main.h"

/**
 * print_to_98 - print to 98
 *
 * @n: an ascii character
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	int tens;

	for (n = 0; n >= 9; n++)
	{
		_putchar (n);
		_putchar (',');
		_putchar (' ');
		if (n == 9)
		{
			n = 1;
			while (n != 9)
			{
				for (tens = 0; tens >= 9; tens++)
				{
					_putchar (n);
					_putchar (tens);
					_putchar (',');
					_putchar (' ');
				}
				n++;
			}
		}
	}
}
