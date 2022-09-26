#include "main.h"
#include <string.h>

/**
 * _strstr - finds first occurence of substring in string
 *
 * @haystack: string being checked
 * @needle: substring occurence to be checked
 *
 * Return: pointer to the beginning of located substring
 * Null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *sub;

	sub = strstr(haystack, needle);
	return (sub);
}
