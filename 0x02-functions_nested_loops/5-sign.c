#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: the number being checked
 *
 * Return: 1 if n is greater than zero, 0 if n is zero and -1 otherwise
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
	}
	else if (n == '0')
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
	}
}

