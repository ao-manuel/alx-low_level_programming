#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid -Returns a pointer to 2-dimensional array
  *
  * @width : width of the 2D array
  * @height : Height of the 2D array
  *
  *Return: int pointer to the 2D array
  *
 **/

int **alloc_grid(int width, int height)
{
	int **gridA;
	int i, x, y;
	/*If height or width is zero or negatice Return (NULL)*/
	if (width <= 0 || height <= 0)
		return (NULL);
	/*allocate memory of pointer*/
	gridA = malloc(height * sizeof(int *));
	/*Check malloc*/
	if (gridA == NULL)
	{
		free(gridA);
		return (NULL);
	}
	/*Allocate memory to integers for pointer to pointers*/
	for (i = 0; i < height; i++)
	{
		gridA[i] = malloc(width * sizeof(int));
		if (gridA[i] == NULL)
		{
			for (x = 0; x <= i; x++)
			{
				free(gridA[x]);
			}
			free(gridA);
			return (NULL);
		}
	}
	/*Initialize each integer to 0*/
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			gridA[x][y] = 0;
		}
	}
	return (gridA);
}
