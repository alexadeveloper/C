#include "holberton.h"
/**
* print_times_table - print tables
* @n: int parameter
* Return: Always 0.
*/
void print_times_table(int n)
{
	int a, b;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (((a * b) > 99))
			{
				_putchar(((a * b) / 100) + '0');
				_putchar((((a * b) % 100) / 10) + '0');

			}
			else if ((a * b) > 9)
			{
				_putchar(' ');
				_putchar(((a * b) / 10) + '0');
			}
			if (a != 0 && (a * b) < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(((a * b) % 10) + '0');
			if (a != n)
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
