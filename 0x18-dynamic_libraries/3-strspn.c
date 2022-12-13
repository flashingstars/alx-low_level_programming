#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of char in s matching accept
 *
 * @s: string to be checked
 * @accept: string whose characters will be matched
 *
 * Return: bytes found in s that are in accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
