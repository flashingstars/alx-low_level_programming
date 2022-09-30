#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: number of command line arguments
 * @argv: command line argument strings
 *
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int count;

	count = 0;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
