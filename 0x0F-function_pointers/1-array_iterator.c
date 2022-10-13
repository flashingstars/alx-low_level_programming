#include "function_pointers.h"

/**
 * array_iterator - a function that perfoms functions on each
 * element of the array
 *
 * @array: array being used
 * @size: size of the array
 * @action: function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
