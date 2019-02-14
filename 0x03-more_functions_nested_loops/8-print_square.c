#include "holberton.h"

/**
*print_square - draws a diagonal line in the terminal
*@size: is a int
*Return: values 0
*/
void print_square(int size)
{
	int filas, columnas;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (columnas = 1; columnas <= size; columnas++)
		{
			for (filas = 1; filas <= size; filas++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
