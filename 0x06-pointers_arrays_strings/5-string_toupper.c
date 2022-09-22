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
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
