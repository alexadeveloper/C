#include "holberton.h"

/**
  *_puts -print a string
  *@str: is a char
 */

void _puts(char *str)
{
	int cont;
	char letra;

	cont = 0;
	while (str[cont] != '\0')
	{
		letra = str[cont];
		_putchar(letra);
		cont++;
	}
	_putchar('\n');
}
