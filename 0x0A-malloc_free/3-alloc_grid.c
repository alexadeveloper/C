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

/**
 *alloc_grid- return a array 2 dimensional
  *@width: the width of the grid
  *@height: the height of the grid
  *Return: null if it fail
 */

int **alloc_grid(int width, int height)
{
	int fila, columna;
	int **matrix;

	if (width <= 0)
	return (NULL);
	if (height <= 0)
	return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free_grid(matrix, height);
	return (NULL);
	}
	for (fila = 0; fila < height; fila++)
	{
		matrix[fila] = malloc(sizeof(int) * width);
		if (matrix[fila] == NULL)
		{
			free_grid(matrix, width);
		return (NULL);
		}
	}
	for (fila = 0; fila < height; fila++)
	{
		for (columna = 0; columna < width; columna++)
		{
			matrix[fila][columna] = 0;
		}
	}
return (matrix);
}
