#include "holberton.h"
#include <stdio.h>

/**
  *mypow -do a power
  *@base: is a int
  *@power: is a exponent
  *Return: the pow
 */

int mypow(int base, int power)
{
	int p, potencia;

	potencia = 1;
	if (power == 0)
	{
		potencia = 1;
	}
	else
	{
		for (p = 1; p <= power; p++)
		{
			potencia = potencia * base;
		}
	}
return (potencia);
}

/**
  *print_number -print an integer
  *@n: is a integer
 */

void print_number(int n)
{
	int i, j, num, cont, potencia;

	num = n;
	cont = 0;
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if (num == 0)
	{
		_putchar('0');
	}
	for (i = 0; i <= 8; i++)
	{
		potencia = mypow(10, (8 - i));
		j = num / potencia;
		if (j > 0)
		{
			_putchar(j + 48);
			cont++;
		}
		num = num - (j * potencia);
		potencia = mypow(10, (7 - i));
		if ((num / potencia) == 0 && cont != 0 && i != 8)
		{
			_putchar('0');
		}
	}
}
