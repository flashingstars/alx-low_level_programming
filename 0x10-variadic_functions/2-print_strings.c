#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints a number of strings
 *
 * @separator: String printed between string
 * @n: number of strings to print
 *
 * Return: nil if string is nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list words;

	va_start(words, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(words, char *);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(words);
}
