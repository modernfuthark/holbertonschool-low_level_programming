#include "holberton.h"
/**
 * prime - Find the prime of n
 * @n: Number to calculate
 * @x: Counter
 * Return: 1 if prime, 0 if not
 */

int prime(int n, int x)
{
	if (n % x != 0 && x < 10)
		return (prime(n, x + 1));
	else if (n % x == 0)
		return (0);
	return (1);
}

/**
 * is_prime_number - Determine if n is a prime number
 * @n: Number
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0)
		return (0);

	return (prime(n, 2));
}
