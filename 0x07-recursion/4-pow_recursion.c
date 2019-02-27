#include "holberton.h"

/**
  *_pow_recursion - return pow  of a number
  *@x: is the base
  *@y: is te powder
  *Return: the pow
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
return (x * _pow_recursion(x, y - 1));
}
