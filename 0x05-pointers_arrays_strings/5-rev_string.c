#include "main.h"

/**
 * rev_string - reverse a string
 * @s:ascii
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	while (n >= 0)
	{
		i--;
		_putchar(s[n]);
	}
