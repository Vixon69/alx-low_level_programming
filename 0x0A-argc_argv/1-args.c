#include <stdio.h>

/**
 * main - program that prints the number of arguments passed to it
 * @argc: argument character
 * @argv: argument vector
 * Return: success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
