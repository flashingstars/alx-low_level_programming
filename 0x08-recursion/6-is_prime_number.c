#include "main.h"

int actual_prime_number(int n, int i);

/**
 * is_prime_number - finds if a number is prime or not
 *
 * @n: number to be checked
 *
 * Return: 1 if it's a prime number
 * 0 if it's not a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - calculates prime using recursion
 *
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is a prime number
 * 0 if not a prime number
 */

int actual_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime_number(n, i - 1));
}

