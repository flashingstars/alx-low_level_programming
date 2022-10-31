#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 *
 *
 * @n: number to be converted to binary
 * @index: index to be set
 *
 * Return: 1 on success
 * -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
