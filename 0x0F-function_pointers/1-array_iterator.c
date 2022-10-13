#include "function_pointers.h"

/**
 * array_iterator - a function that perfoms functions on each
 * element of the array
 *
 * @array: array being used
 * @size: size of the array
 * @action: function to be performed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
