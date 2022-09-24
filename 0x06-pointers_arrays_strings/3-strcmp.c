#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return:0 if the same,negative if s1 < s2 and positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, rtn = 0;

	while (rtn == 0)
	{
		if ((s1[i] == '\0') && (s2[1] == '\0'))
			break;
		rtn = s1[i] - s2[i];
		rtn++;
	}
	return (rtn);
}
