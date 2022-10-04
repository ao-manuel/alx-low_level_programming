#include <stdio.h>
#include <stdlib.h>

/**
  *free_grid - free memory allocated to 2D array
  *
  * @grid : 2D array
  * @height : height of the array
  *
  * Return: void
  *
 **/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
