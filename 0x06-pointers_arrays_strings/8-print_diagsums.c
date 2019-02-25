#include "holberton.h"
#include <stdio.h>
/**
  *print_diagsums - sum two diagonals
  *@a: is a int
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, sum, sum2, tam;

	j = 0;
	k = size - 1;
	tam = (size * size) - 1;
	sum = 0; sum2 = 0;
	for (i = 0; i <= tam; i++)
	{
		if (i == j)
		{
			sum = sum + a[i];
			j = j + (size + 1);
		}
		if (i == k && i != tam)
		{
			sum2 = sum2 + a[i];
			k = k + (size - 1);
		}
	}
	printf("%d, %d\n", sum, sum2);
}
