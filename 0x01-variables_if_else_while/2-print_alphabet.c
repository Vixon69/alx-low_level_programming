#include<stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase.
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case < 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	return (0);
}
