#include<stdio.h>
/**
 * main - entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 89; num++)
	{
		if ( num <= 9 )
		{
			putchar('0');
		}
		putchar(num);
		if (num == 89)
		{
			putchar('\n');
			return (0);
		}
		putchar(',');
		putchar(' ');
	}

	return (0);
}
