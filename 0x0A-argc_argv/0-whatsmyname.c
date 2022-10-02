#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints its name followed by a new line.
 * @argc: argument character
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
