#include "main.h"
/**
 * is_palindrome - a function that returns 1 if a string is a
 * palindrome and 0 if not.
 * @s - pointer to the string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s >= 0 && *s <= 9)
		return (1);
	else if ((s[0]) == (*s % 10 || *s / 10))
		return (1);
	return (0);

}
