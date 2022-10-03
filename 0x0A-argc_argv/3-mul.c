#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies 2 numbers
 * @argc: argument character
 * @argv: argument vector
 * Return:0 if success and -1 if not
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	if (argc >= 0)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}	return (0);
	return (1);
}
