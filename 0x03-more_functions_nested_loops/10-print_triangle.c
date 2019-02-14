#include "holberton.h"

/**
*print_triangle - draws a triangle in the terminal
*@size: is a int
*Return: values 0
*/
void print_triangle(int size)
{
	int times, espacios, imprime;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (times = 1; times <= size; times++)
		{
			for (espacios = size; espacios > times; espacios--)
			{
				_putchar(' ');
			}
			for (imprime = 1; imprime <= times; imprime++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
