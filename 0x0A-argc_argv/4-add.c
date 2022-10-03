#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 *
 * @argc: Number of commands passed
 * @argv: string array of commands passed
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int k, num, sum = 0;
	char *x;

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			num = strtol(argv[k], &x, 10);
			if (!*x)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
