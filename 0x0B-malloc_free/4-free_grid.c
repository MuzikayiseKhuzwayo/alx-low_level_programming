#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a recently created 2d grid
* @grid: grid that needs to be freed
* @height: height of array
*
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
