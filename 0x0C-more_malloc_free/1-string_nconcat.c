#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - alocates memory to concatenated string
 *
 * @s1: Destination string
 * @s2: Source string
 * @n: size of bytes required to concatenate
 *
 * Return: Pointer to string
 * or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatstr;
	unsigned int len = n, index;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concatstr = malloc(sizeof(char) * (len + 1));

	if (concatstr == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concatstr[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concatstr[len++] = s2[index];

	concatstr[len] = '\0';

	return (concatstr);
}
