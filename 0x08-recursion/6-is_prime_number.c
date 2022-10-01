#include "main.h"
/**
 * is_prime_number - a function that returns 1 if its a prime number
 * and 0 otherwise
 * @n: the value to check
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (n % is_prime_number(n) == 0)
		return (1);
	return (0);
}
