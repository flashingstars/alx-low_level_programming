#include "main.h"

/**
 * reset_to_98 - updates the value of its point to 98
 *
 * @n: pointer being updated
 */

void reset_to_98(int *n)
{
	int x = 55;
	n = &x;

	*n = 98;

	_putchar(x);
}
