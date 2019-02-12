#include "holberton.h"
/**
* print_times_table - print tables
* @n: int parameter
* Return: Always 0.
*/
void print_times_table(int n)
{
	int c, m;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (c = 0; c <= n; c++)
	{
		for (m = 0; m <= n; m++)
		{
			if (((m * c) > 99))
			{
				_putchar(((m * c) / 100) + '0');
				_putchar((((m * c) % 100) / 10) + '0');

			}
			else if ((m * c) > 9)
			{
				_putchar(' ');
				_putchar(((m * c) / 10) + '0');
			}
			if (m != 0 && (m * c) < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(((m * c) % 10) + '0');
			if (m != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
