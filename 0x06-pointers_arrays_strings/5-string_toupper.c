#include "main.h"

/**
 * string_toupper - change case from lower to upper
 *
 * @: string to be changed to uppercase
 *
 * Return: string in uppercase characters
 */

char *string_toupper(char *)
{
	char str;
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
