#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char b[98] = {0x00};

	*_memset(char *s, char b, unsigned int n);
	_memset(b, 0x01, 96);
	printf("---------------------------------\n");
	*_memset(char *s, char b, unsigned int n);
	return (0);
}
