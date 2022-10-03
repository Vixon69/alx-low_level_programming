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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
