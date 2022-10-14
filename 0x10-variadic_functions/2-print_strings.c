#include "variadic_functions.c"

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

	if (!separator)
		return;

	for (i = 0; i < n; i++)
	{
		c =  va_arg(strings,  char*);
		printf("%s%s", c == NULL ? "(nil)" : c, i != (n - 1) ? separator : "");
	}



	va_end(strings);
	printf("\n");


}
