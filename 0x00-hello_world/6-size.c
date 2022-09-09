#include<stdio.h>

/**
 * main - A program printing the size off various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%c/n", sizeof(char));
	printf("%d/n", sizeof(int));
	printf("%lu/n", sizeof(long int));
	printf("%lu/n", sizeof(long long int));
	printf("%lu/n", sizeof(float));
	return (0);
}
