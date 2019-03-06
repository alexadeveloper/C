#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *free_grid- free memory
  *@grid: the pointer to the pointer
  *@height: the height of the grid
  *Return: null if it fail
 */

void free_grid(int **grid, int height)
{
	int fila;

	if (grid == NULL || height == 0)
	return;
	for (fila = 0; fila < height; fila++)
	{
		free(grid[fila]);
	}
	free(grid);
}
