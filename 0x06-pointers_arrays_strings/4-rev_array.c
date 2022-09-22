#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 *
 * @a: array to be reversed
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int x, i, len;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[len];
		a[len--] = x;
	}

}
