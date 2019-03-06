#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_strlen - returns the length of a string
  *@s: is a char
  *Return: the length of a string
 */
int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
return (cont);
}

/**
 *alloc_grid- return a array 2 dimensional
  *@width: the width of the grid
  *@height: the height of the grid
  *Return: null if it fail
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	matrix = malloc(sizeof(int) * height);
	if (matrix == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
return (matrix);
}
