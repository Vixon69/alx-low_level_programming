#include "main.h"
/**
 * _islower - to know if it is in lower case or not
 *
 * @c: is and ascii value
 * Return: 1 if c is lowercase and 0  otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
