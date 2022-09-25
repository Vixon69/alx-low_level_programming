#include  "main.h"
/**
 * leet - a function that encodes a string to 1337
 * @n: the pointer variable
 * Return: Always 0
 */

char *leet(char *n)
{
	int i[5] = {'a', 'e', 'o', 't', 'l'};
	int j[5] = {'A', 'E', 'O', 'T', 'L'};
	int a, b;

	for (a = 0; a <= i['\0']; a++)
	{
		for (b = 0; b <= n['\0']; b++)
		{
			if ((i[a] == n[b]) || (j[a] == n[b]))
			{
				n[b] = 4;
				_putchar(n[b]);
			}
		}
	}
	return (0);
}
