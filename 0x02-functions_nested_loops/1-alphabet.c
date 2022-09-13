#include "main.h"
/**
 * main - write a function that prints the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet < 'z'; alphabet++)
	{
		_putchar (alphabet);
	}

	_putchar ('\n');

}
