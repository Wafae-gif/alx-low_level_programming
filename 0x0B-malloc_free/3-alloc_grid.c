#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of th grid
 * @height: height of the grid
 * Return: NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(width * sizeof(int *));
		for (i = 0; i < width; i++)
		{
			grid[i] = (int *)malloc(height * sizeof(int));
		}
	if (grid == NULL)
	{
		return (NULL);
	}
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	return (grid);
}
