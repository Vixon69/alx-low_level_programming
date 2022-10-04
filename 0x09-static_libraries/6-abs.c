#include "main.h"
/**
 * _abs - prnt absolute value.
 *
 *@j: Ascii character.
 *
 * Return: Always 0 (success).
 */

int _abs(int j)
{
	if (j > 0)
	{
		return (j);
	}
	else if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}

}
