#include "holberton.h"

/**
 *print_one  -  prints numbers less 9
 *@a: is a int
 *@b: is a int
 *Declaration: Auxilio
 *Return: nothing
 */
void print_one(int a, int b)
{
	if (b != 0)
	{
		_putchar(' ');
		_putchar(' ');
	}
	_putchar(a + '0');
}
/**
  *print_two - prints numbers > 9 && < 99
  *@c: is a int
  *Return: nothing
  */
void print_two(int c)
{
	_putchar(' ');
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
}
/**
  *print_three - print number >99
  *@d : is a int
  *Return: Nothing
  */
void print_three(int d)
{
	_putchar((d / 100) + '0');
	_putchar(((d / 10) % 10) + '0');
	_putchar((d % 10) + '0');
}
/**
  *print_times_table  -  prints the n times table, starting with 0
  *@n: is a int
  *Return: values 0
  */
void print_times_table(int n)
{
	int e, f, g;

	if (n > 0 && n < 15)
	{
		for (e = 0 ; e <= n ; e++)
		{
			for (f = 0 ; f <= n ; f++)
			{
				g = e * f;
				if (g > 99)
					print_three(g);
				if (g >= 10 && g <= 99)
					print_two(g);
				if (g <= 9)
					print_one(g, f);
				if (f != n)
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
}
