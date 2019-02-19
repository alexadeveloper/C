#include "holberton.h"
#include<stdio.h>

/**
  *print_array -prints a array
  *@a: is a int
  *@n: is a int
 */

void print_array(int *a, int n)
{
	int j;
	int x;

	for (j = 0; j < n; j++)
	{
		x = a[j];
		printf("%d", x);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
