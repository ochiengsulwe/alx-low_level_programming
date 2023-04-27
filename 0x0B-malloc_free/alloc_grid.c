#include "main.h"

int **alloc_grid(int width, int height)
{
	int **grid;
	int j;
	int k;
	int i;

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return NULL;
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return NULL;
	}
	if (width < 1 || height < 1)
		return NULL;
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}
	return grid;
}
