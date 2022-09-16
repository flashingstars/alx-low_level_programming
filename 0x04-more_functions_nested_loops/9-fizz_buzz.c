#include <stdio.h>

/**
 * main - Entry point
 *
 * description: Printing fizz for multiples of 3
 * buzz for multiples of 5
 * fizzbuzz for multiples of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			continue;
		}
		printf(" ");
	}

	printf("\n");

	return (0);
}
