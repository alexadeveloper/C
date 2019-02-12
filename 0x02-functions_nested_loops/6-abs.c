#include "holberton.h"
/**
  *_abs - computes the absolute value of an integer
  *@c: int paramater
  *Return: absolute value
 */
int _abs(int c)
{
	int a;

	if (c < 0)
	{
		a = c * (-1);
	}
	else
	{
		a = c;
	}
return (a);
}
