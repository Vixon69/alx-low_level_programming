#include"main.h"
/**
 * _isalpha - checks for an alphabetic character
 *
 * @c: an ascii character
 *
 * Return: if its an alphabet returns 1 else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
