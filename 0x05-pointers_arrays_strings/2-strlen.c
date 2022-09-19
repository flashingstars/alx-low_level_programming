#include "main.h"
#include <string.h>

/**
 * int_strlen - finds the length of a string
 *
 * @s: string pointer whose length is being sought
 *
 * Return: length of string
 */

int_strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
