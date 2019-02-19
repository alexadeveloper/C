#include "holberton.h"

/**
  *swap_int -  swaps the values of two integers
  *@a: is a pointer
  *@b: is a pointer
  *Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
