#include "holberton.h"

/**
  *print_rev -print reverse a string
  *@s: is a char
 */

void print_rev(char *s)
{
	int cont, i;
	char letra;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	for (i = (cont - 1); i >= 0; i--)
	{
		letra = s[i];
		_putchar(letra);
	}
	_putchar('\n');
}
