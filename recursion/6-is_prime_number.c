#include "main.h"

/**
 * _is_prime_helper - recursively checks divisors of n starting at i
 * @n: number to test
 * @i: current divisor to check
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is a prime number, otherwise 0
 * @n: integer to evaluate
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (_is_prime_helper(n, 3));
}
