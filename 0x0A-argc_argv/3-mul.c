#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 *
 * @argc: Number of commands passed
 * @argv: pointer to string of commands passed
 *
 * Return: multiplication of two numbers
 * Error if only one argument is passed
 */

int main(int argc, char **argv)
{
	int a, b, mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1)
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;

	printf("%d\n", mul);

	return (0);
}
