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
	int len, len1;

	len = 0;
	len1 = 0;

	while (dest[len++])
	{
		len1++;
	}
	for (len = 0; src[len]; len++)
	{
		dest[len1++] = src[len];
	}

	return (dest);
}
