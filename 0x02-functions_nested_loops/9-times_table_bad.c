#include "holberton.h"

/**
  *times_table -  prints the 9 times table, starting with 0
  *
  *Return: Nothing
 */
void times_table(void)
{
	int h, m, a;
	for (h = 0; h <= 9; h++)
	{
		for (m = 0; m <= 9; m++)
		{
			a = (h * m);
			_putchar(a + '0');
			if (m == 9)
			{
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
