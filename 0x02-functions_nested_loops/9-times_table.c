#include "holberton.h"

/**
 *times_table -  prints the last digit of a number
 *
 *Return: Nothin
 */
void times_table(void)
{
	int h, m, a;

	for (h = 0; h <= 9; h++)
	{
		for (m = 0; m <= 9; m++)
		{
			a = (h * m);
			if (a > 9)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				if (m != 0)
				{
					_putchar(' ');
				}
				_putchar(a + '0');
			}
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
