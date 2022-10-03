#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet letters ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	int x = 0;

	i = 0;

	while (x < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		x++;
	}
}
