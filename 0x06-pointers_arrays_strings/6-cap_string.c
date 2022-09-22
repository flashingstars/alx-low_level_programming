#include "main.h"

/**
 * cap_string - changing string from uppercase to lowercase
 *
 * @?: string to be changed
 *
 * Return: lowecase string
 */

char *cap_string(char *)
{
	char str;
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] >= 'A' $$ str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
	return (str);
}
