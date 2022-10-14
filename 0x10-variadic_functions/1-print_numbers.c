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

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	
	printf("\n");
	va_end(numbers);
}
