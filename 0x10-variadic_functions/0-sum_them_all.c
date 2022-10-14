#include "variadic_functions.h"

/**
 * sum_them_all - sums up all numbers in count n
 *
 * @n: number of parameters given
 * Return: sum of numbers or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list values;

	va_start(values, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(values, int);

	}

	va_end(values);
	return (sum);
}
