#include<stdio.h>

/**
 * main - A program printing the size off various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	int f;

	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a char: %lu byte(s)\n", c);
	printf("Size of an int: %lu byte(s)\n", i);
	printf("Size of a long int: %lu byte(s)\n", li);
	printf("Size of a long long int: %lu byte(s)\n", lli);
	printf("Size of a float: %d\n byte(s)", f);
	return (0);
}
