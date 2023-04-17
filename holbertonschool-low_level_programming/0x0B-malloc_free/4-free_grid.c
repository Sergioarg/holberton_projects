#include "holberton.h"
/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: is the grid
 * @height: is the height
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
