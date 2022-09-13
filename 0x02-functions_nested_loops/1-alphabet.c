#include "main.h"
/**
 * main - write a function that prints the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet < 'z'; alphabet++)
	{
		_putchar (alphabet);
	}
	_putchar ('\n');

	return (0);
}
