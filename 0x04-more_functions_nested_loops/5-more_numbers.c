#include "main.h"
/**
 * more_numbers - Write a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int num;
	int c

	for (num = 0; num <= 10; num++)
	{
		_putchar(num);
		_putchar('\n');
		
		for (c = 0; c <= 14; c++)
		{
			_putchar(c);
		}
	}

}
