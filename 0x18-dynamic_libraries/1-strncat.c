#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n bytes from source
 *
 * @dest: the string being increased
 * @src: the string to be copied
 * @n: number of characters to be copied
 *
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
