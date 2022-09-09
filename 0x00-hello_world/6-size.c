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

	printf("Size of a char: %lu\n byte(s)", c);
	printf("Size of a int: %lu\n byte(s)", i);
	printf("Size of a long int: %lu\n byte(s)", li);
	printf("Size of a long long int: %lu\n byte(s)", lli);
	printf("Size of a float: %f\n byte(s)", f);
	return (0);
}
