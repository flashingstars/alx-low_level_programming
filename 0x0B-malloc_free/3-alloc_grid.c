#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates 2 dimensional array of pointers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2 dimensional array of integers
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int hgt_index, wdt_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		ptr[hgt_index] = malloc(sizeof(int) * width);

		if (ptr[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
			{
				free(ptr[hgt_index]);
			}
			free(ptr);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wdt_index = 0; wdt_index < width; wdt_index++)
		{
			ptr[hgt_index][wdt_index] = 0;
		}
	}

	return (ptr);
}
