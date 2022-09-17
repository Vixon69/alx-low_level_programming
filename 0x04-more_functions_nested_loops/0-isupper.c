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
	int r;
	char upper;

	for (upper = 65; upper <= 90; upper++)
	{
		if (c >=0 && c <= 64)
		{
			return (0);
		}
		else if (c >= 91 && c <= 126)
			return (0);
		if (c == upper)
		{
			r = 1;
			break;
		}
	}
	return (r);
}
