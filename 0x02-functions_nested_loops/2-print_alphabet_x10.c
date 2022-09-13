#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int num;
	int alphabet;

	num = 0;

	while (num <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar (alphabet);
		}
		_putchar ('\n');
		num++;
	}
}
