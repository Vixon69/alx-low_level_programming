#include "main.h"
/**
 * _isupper - check for uppercase letters
 *
 * @c: An ascii character
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)

{
	char upper;

	for (upper = 65; upper <= 90; upper++)
	{
		if (c == upper)
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
