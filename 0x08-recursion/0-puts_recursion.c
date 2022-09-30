#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 * @s: a pointer to a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_puts_recursion(s++);
}
