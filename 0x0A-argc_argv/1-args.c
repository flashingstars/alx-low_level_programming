#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 *
 * @argc: command line argument count
 * @argv: command line argument string
 *
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
