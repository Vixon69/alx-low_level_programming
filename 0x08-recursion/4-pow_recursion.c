#include "main.h"
/**
 * _pow_recursion - a function that returns a value of x raised
 * to the power of y
 * @x: value to raised
 * @y: the power
 * Return:an int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
