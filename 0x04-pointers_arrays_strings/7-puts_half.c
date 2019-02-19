#include "holberton.h"

/**
  *puts_half -prints the second half of the string
  *@str: is a char
 */

void puts_half(char *str)
{
	int i, n, j;
	char letra;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 != 0)
	{
		n = ((i - 1) / 2) + 1;
	}
	else
	{
		n = i / 2;
	}
	for (j = n; j <= i; j++)
	{
		letra = str[j];
		_putchar(letra);
	}
	_putchar('\n');
}
