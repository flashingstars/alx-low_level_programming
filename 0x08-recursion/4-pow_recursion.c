#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns value of x raised to power y
 *
 * @x: value to be raised
 * @y: power of the value
 *
 * Return: power of the value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
