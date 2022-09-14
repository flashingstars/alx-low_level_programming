#include "main.h"
/**
 * main - Print the alphabet in lowercase letters
 *
 * return: 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
int main(void)
{
	void print_alphabet(void);
	return (0);
}
