#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid- return a array 2 dimensional
  *@width: the width of the grid
  *@height: the height of the grid
  *Return: null if it fail
 */

int **alloc_grid(int width, int height)
{
	int fila, columna;
	int **matrix = NULL;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
	return (NULL);
	}
	for (fila = 0; fila < height; fila++)
	{
		matrix[fila] = malloc(sizeof(int) * width);
		if (matrix[fila] == NULL)
		{
			if (fila >= 0)
			{
				free(matrix[fila]);
				fila--;
			}
			free(matrix);
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
