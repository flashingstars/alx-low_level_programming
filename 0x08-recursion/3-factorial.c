#include "main.h"

/**
 * factorial - prints the factorial of a given number
 *
 * @n: number whose factorial is printed
 *
 * Return: factorial of number
 * -1 to indicate error if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
