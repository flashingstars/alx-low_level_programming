#include "main.h"

/**
 * get_endianness - gets the order or sequence of bytes of a word
 * of digital data in computer memory
 *
 * Return: 0 if big endian
 * 1 if little endian
 */

int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
