#include <stdio.h>
/**
 * main - write a program that prints all the argumens it recieves
 * @argc: no of argv
 * @argv: array of strings
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
