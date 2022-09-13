#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar (text[i]);
	}
	_putchar ('\n');

	return (0);
}
