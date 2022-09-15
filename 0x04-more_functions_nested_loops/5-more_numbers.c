#include "main.h"

/**
 * more_numbers - prints digits 0 to 14 ten times
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putcar('\n');
	}
}
