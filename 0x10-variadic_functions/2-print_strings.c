#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print all argument
 *
 * @separator: string that separates the strings
 * @n: number of strings to print
 *
 * Return: nil if string is NULL
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;


	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(strings, char *);

		if (c)
			printf("%s", c);
		else
			printf("(nil)");

		if (i < n - 1)
			if (!separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
