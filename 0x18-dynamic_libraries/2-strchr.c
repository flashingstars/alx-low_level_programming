#include "main.h"
#include <string.h>

/**
 * _strchr - searches for the first occurence of c
 *
 * @s: string to be searched
 * @c: character to be searched
 *
 * Return: pointer to first occurence of c in string s
 * Null if character is not found
 */

char *_strchr(char *s, char c)
{
	char *frst;

	frst = strchr(s, c);
	return (frst);
}
