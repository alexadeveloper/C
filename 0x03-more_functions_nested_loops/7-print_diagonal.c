#include "holberton.h"

/**
*print_diagonal - draws a diagonal line in the terminal
*@n: is a int
*Return: values 0
*/
void print_diagonal(int n)
{
	int times, espacios;

	for (times = 1; times <= n; times++)
	{
		if (times != 1)
		{
			_putchar('\n');
			for (espacios = 1; espacios <= (times - 1); espacios++)
			{
				_putchar(' ');
			}
		}
		_putchar(92);
	}
	_putchar('\n');
}
