#include "holberton.h"
/**
  *print_sign - prints the sign of a number
  *@c: int paramater
  *Return: 1 if is greater than zero, 0 if is zero, -1 if is less than zero
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
	return (-1);
	}
}
