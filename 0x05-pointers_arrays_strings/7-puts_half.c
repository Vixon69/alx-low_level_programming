#include "main.h"

/**
 *  puts_half - prints half a string
 *  @str: a pointer
 *  Return:void
 */

void puts_half(char *str)
{
	int length_of_the_string, i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
		length_of_the_string = i;
		_putchar(length_of_the_string);
	}

}
