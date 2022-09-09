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
	float f;
	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a char: %lu byte(s)", c);
	printf("Size of a int: %lu byte(s)", i);
	printf("Size of a long int: %lu byte(s)", li);
	printf("Size of a long long int: %lu byte(s)", lli);
	printf("Size of a float: %lu byte(s)", f);
	return (0);
}
