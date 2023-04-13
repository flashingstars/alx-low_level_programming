#include "search_algos.h"

/**
 * binary_search - conducts a binary search on sorted elements
 * @array: Array of elements to be searched
 * @size: Size of the array
 * @value: Element to be searched
 * Return: index of value or -1 if absent or NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1;
	size_t i, mid;

	while (l <= r)
	{
		printf("Searching in array:");
		for (i = l; i < r; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[r]);

		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
