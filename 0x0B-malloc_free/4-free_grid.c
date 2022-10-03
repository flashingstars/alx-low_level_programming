#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up space allocated by malloc
 *
 * @grid: pointer to location to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}

	free(grid);
}
