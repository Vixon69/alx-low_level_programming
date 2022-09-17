#include <stdio.h>
/**
 * main - print multiples
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, n2, multiples;

	while (n = 3)
	{
		n2 = 1;

		n2++;
		multiples = (n * n2);

		printf("%d\n", multiples);
		if (multiples == 1024)
		{
			return (0);
		}
	}

}
