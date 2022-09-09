#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str['z'];
	int ch, i, n = 'a';

	while ((ch <= getchar()) != EOF && n <= 'z')
		str[n++] = ch;
	for (i = 'a'; i < n; ++i)
		putchar(str[i]);
	putchar('\n');

	return (0);
}
