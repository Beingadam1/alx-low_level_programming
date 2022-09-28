#include "main.h"

/**
 * prime_checker - checks for prime
 * @n: input to check
 * @i: iteration
 * Return: prime
 */

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: number to check
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}
