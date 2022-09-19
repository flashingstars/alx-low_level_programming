#include "main.h"
#include <string.h>

/**
 * print_rev - prints the reverse of a given string
 *
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int a, b, length;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	length = a;

	for (b = length - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
