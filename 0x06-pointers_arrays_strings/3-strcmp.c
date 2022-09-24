#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return:0 if the same,negative if s1 < s2 and positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int count2 = 0;

	for (; count != '\0'; count++)
	{
		if (s1[count] == s2[count])
			return (0);
	}

}
