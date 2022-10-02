#include <stdio.h>

/**
 * main - program that prints the number of arguments passed to it
 * @argc: argument character
 * @argv: argument vector
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
