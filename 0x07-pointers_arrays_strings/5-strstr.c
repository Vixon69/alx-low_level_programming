#include "main.h"
#include <stdio.h>

/**
 * _strstr - find a string from the needle in the haystack
 * @haystack: the  first string
 * @needle: the sub string
 * Return: needle or null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		while (*&needle)
		{
			if (*&haystack == *&needle)
			{
				return (needle);
			}
			else
				break;
		}
		haystack++;
	}
	return (NULL);


}
