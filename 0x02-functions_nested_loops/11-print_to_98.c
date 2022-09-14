#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers to 98
 *
 * @n: integer starting point
 *
 * Return: void
 */

void print_to_98_(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	_putchar('\n');
}
