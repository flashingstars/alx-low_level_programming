#include "main.h"

/**
 * reverse_array - reverses the elements of an integer array
 *
 * @a: array to be reversed
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}

}
