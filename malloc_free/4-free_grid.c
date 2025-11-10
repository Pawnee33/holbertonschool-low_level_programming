#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D dimensional previously
 * created by alloc_grid
 * @grid: The 2D array to free
 * @height: The number of rows in the grid
 *
 * Description: This function frees each row of the grid first,
 * then frees the array of pointers itself to avoid memory leaks.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
