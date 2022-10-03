#include <stdio.h>

/**
 * main - prints program name
 *
 * @argc: command line argument count
 * @argv: command line argument string
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
