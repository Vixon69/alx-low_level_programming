#include "main.h"

/**
 * print_sign - print the signs.
 *
 *@n: an ascii character.
 *
 * Return: 0 if 0 ,1 if > 0,-1 if < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}

}
