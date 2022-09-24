#include "main.h"
/**
 * cap_string - Write a function that capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 65) && (*(s + count) <= 90))
			*(s + count) = *(s + count) + 32;
		else if ((*(s + count) >= 33) && (*(s + count) <= 125))
			*(s + count) = *(s + count) + 92;
		count++;
	}

	return (s);
}
