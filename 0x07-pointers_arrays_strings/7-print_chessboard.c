#include "main.h"
/**
 * print_chessboard - prints a chess board
 * @a: a pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int j = 0;
	int b = 0;

	for (; j < 8; j++)
	{
		for (; b < 8; b++)
		{
			_putchar(*(*(j + a) + b));
		}
	_putchar('\n');
	}
}
