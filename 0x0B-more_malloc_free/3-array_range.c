#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *array_range - allocates memory for an array
 *@min: is size of array
 *@max: size of type
 *Return: null it is fail
 */

int *array_range(int min, int max)
{
	int *matrix;
	unsigned int i, tam, k;

	if (min > max)
	{
	return (NULL);
	}
	tam = max - min;
	matrix = malloc(sizeof(int) * (tam + 1));
	if (matrix == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = min; i <= max; i++)
	{
		matrix[k] = i;
		k++;
	}
return (matrix);
}
