#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
