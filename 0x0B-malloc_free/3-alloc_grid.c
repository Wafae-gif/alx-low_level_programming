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

	if (width <= 0 || height <= 0)
		return (NULL);
	int **grid = calloc(sizeof(width) * sizeof(height), sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i] [j] = 0;
		}
	}
	return (grid);
}
