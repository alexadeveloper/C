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
	int i, j, num, cont;
	int divisores[] = { 10000000, 1000000, 100000, 10000, 1000, 100, 10, 1 };

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
	for (i = 0; i <= 7; i++)
	{
		j = num / divisores[i];
		if (j > 0)
		{
			_putchar(j + 48);
			cont++;
		}
		num = num - (j * divisores[i]);
		if ((num / divisores[i + 1]) == 0 && cont != 0 && i != 7)
		{
			_putchar('0');
		}
	}
}
