#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array of integers to be compared
 * @size: elements in array
 * @cmp: function that compares the array elements
 *
 * Return: index of first element that doesn't return 0
 * -1 if no elements match or size is < 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
