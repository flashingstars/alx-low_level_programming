#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: < 0 if s1 is less than s2
 * > 0 if s2 is less than s1
 * 0 if s1 is equal to s2
 */

int _strcmp(char *s1, char *s2)
{
	int v;

	v = strcmp(s1, s2);
	return (v);
}
