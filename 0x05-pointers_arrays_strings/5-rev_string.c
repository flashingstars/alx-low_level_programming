#include "main.h"
#include <string.h>

/**
 * rev_string - reversing a string
 *
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
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

}
