#include "main.h"

/**
 * string_toupper - change case from lower to upper
 *
 * @str: string to be changed to uppercase
 *
 * Return: string pointer to uppercase
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}

		index++;
	}
	return (str);
}
