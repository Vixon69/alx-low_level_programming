#include "main.h"
/**
 * set_string - Write a function that sets the value of a pointer to a char
 * @s: pointer source
 * @to: target address
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
