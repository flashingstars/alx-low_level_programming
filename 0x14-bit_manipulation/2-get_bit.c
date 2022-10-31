#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: number to convert to binary representation
 * @index: index of the bit to print
 *
 * Return: Value of the bit at index
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}



