#include <stdio.h>
#include <stdlib.h>

/**
 * main - coins to make change
 *
 * @argc: argument count
 * @argv: argument string
 *
 * Return: change of number passed
 * Error if number of arguments is not 1
 * 0 argument is negative
 */

int main(int argc, char **argv)
{
	int num, j, sum;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	sum = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			sum++;
			num -= coins[j];
		}
	}

	printf("%d\n", sum);
	return (0);
}
