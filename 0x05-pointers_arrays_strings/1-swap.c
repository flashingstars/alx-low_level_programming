#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: first value pointer to be swapped
 * @b: second value pointer to be swapped
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
