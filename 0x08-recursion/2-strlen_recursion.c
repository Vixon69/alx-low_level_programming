#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{

		_strlen_recursion(s++);
	}
	return (0);
}
