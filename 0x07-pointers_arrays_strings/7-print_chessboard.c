#include "main.h"
/**
 * print_chessboard - prints a chess board
 * @a: a pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int j, b;

	for (j = 0; j < 8; j++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(*(*(j + a) + b));
		}
	_putchar('\n');
	}
}
