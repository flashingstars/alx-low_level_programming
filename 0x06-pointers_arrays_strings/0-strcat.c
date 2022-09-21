#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: the destination string to be increased
 * @src: the source string to be copied
 *
 * Return: Concatenated string address
 */

char *_strcat(char *dest, char *src)
{
	int i, len, len1;

	len = strlen(dest);
	len1 = strlen(src);

	for (i = 0; i <= len1; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
