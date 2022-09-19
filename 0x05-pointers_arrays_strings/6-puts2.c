#include "main.h"

/**
 * puts2 - prints every single string letter
 *
 * @str: pointer of the string
 *
 */

void puts2(char *str)
{
	int length, a;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
