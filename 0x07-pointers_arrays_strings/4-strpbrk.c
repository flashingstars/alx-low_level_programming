#include "main.h"
#include <string.h>

/**
 * _strpbrk - finds the first occurence in a string
 *
 * @s: string to be searched
 * @accept: characters to be searched
 *
 * Return: pointer to first occurence
 * Null if no occurence
 */

char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}
