#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints integers in n
 *
 * @separator: separates the numbers printed
 * @n: number of integers to be printed
 *
 * Return: NULL if separator is empty
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		printf("%s", separator);
	}

	va_end(numbers);
	printf("\n");
}
