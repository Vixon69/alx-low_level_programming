#include<stdio.h>
/**
 * main - entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			putchar('\n');
			return (0);
		}
		putchar(',');
		putchar(' ');
	}

	return (0);
}
