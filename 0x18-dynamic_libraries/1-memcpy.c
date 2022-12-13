#include "main.h"
#include <string.h>

/**
 * _memcpy - copies one string to another
 *
 * @dest: string destination
 * @src: string being copied
 * @n: number of characters to copy from src
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
