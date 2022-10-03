#include "main.h"

/**
 * puts_half - prints the half end of a string
 *
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
	int a, b, length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (b = length / 2; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	}

	else if (length % 2)
	{
		for (a = (length - 1) / 2; a < length - 1; a++)
		{
			_putchar(str[a + 1]);
		}
	}

	_putchar('\n');
}
