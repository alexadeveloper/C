#include "holberton.h"
#include <stdio.h>

/**
  *validar - test the root
  *@n: is a int
  *@o: is a int
  *Return: the root square
 */

int validar(int n, int o)
{

	if ((o * o) > n)
	{
		return (-1);
	}
	if ((float) n / o != o)
	{
		return (validar(n, (o + 1)));
	}
	else
	return (o);
}
/**
  *_sqrt_recursion - square root of a number
  *@n: is the number
  *Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (validar(n, 2));
}
