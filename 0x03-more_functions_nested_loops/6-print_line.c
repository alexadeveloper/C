#include "holberton.h"

/**
*print_line - draws a straight line in the terminal
*@n: is a int
*Return: values 0
*/
void print_line(int n)
{
	int times;

	for (times = 1; times <= n; times++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
