#include "holberton.h"
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
		potencia = 1;
	else
	{
		for (p = 1; p <= power; p++)
			potencia = potencia * base;
	}
return (potencia);
}

/**
  *binary_to_uint - converts a binary number to a unsigned int
  *@b: is a pointer to the string
  *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int largo, potencia, resultado, suma, num;

	if (b == NULL)
	{
		return (0);
	}
	largo = 0;
	while (b[largo] != '\0')
	{
		largo++;
	}
	potencia = 0;
	suma = 0;
	while (largo > 0)
	{
		num = b[largo - 1] - 48;
		if (num == 0 || num == 1)
		{
			resultado = num * (mypow(2, potencia));
			suma = suma + resultado;
			potencia++;
		}
		else
		{
			return (0);
		}
		largo--;
	}
return (suma);
}
