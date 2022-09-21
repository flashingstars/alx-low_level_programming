#include "main.h"
#include <string.h>

/**
 * _strncpy - copies upto n characters
 *
 * @dest: pointer to destination array
 * @src: string to be copied
 * @n: number of characters to be copied
 *
 * Return: pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
