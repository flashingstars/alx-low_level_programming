#include "main.h"

/**
 * print_line - draws a straight line in terminal
 *
 * @n: number of times _ is printed
 *
 */

void print_line(int n)
{
	int x;

	if (x > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}

	_putchar('\n');
}
