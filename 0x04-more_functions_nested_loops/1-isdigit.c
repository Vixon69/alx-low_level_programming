#include "main.h"
/**
 * _isdigit - check for digits
 *
 * @c: Ascii value
 *
 * Return: 1 if c is a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	char num;
	int rv;

	for (num = '0'; num <= 9; num++)
	{
		if (c != num)
			return (0);
		if (c == num)
		{
			rv = 1;
			break;
		}
	}
		return (rv);
}
