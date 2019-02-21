#include "holberton.h"

/**
  *reverse_array -reverse an array of integers
  *@a: array int
  *@n: n number elemnts of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, k;
	int dest[n];

	for (i = 0; i < n; i++)
	{
		dest[i] = a[i];
	}
	k = 0;
	for (j = (i - 1); j >= 0; j--)
	{
		a[k] = dest[j];
		k++;
	}
}
