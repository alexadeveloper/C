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
  *_atoi -convert a string to integer
  *@s: is a char
  *Return: the num
 */

int _atoi(char *s)
{
	int i, j, cont, signo, suma, num, power;

	cont = 0;
	suma = 0;
	power = 0;
	signo = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 42 && cont == 0)
			signo = signo * (1);
		if (s[i] == 45 && cont == 0)
			signo = signo * (-1);
		if (s[i] >= 48 && s[i] <= 57)
			cont++;
		if ((s[i] < 48 || s[i] > 57) && cont > 0)
			break;
	}
	if (cont == 0)
	{
	return (0);
	}
	else
	{
		for (j = i; j >= 0; j--)
		{
			if (s[j] >= 48 && s[j] <= 57)
			{
				num = s[j] - 48;
				suma = suma + (num * mypow(10, power));
				power++;
			}
			suma = suma * signo;
		}
	return (suma);
	}
}
