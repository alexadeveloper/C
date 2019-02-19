#include "holberton.h"

/**
  *puts2 -print  one character out of two in a string
  *@str: is a char
 */

void puts2(char *str)
{
	int i;
	char letra;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			letra = str[i];
			_putchar(letra);
		}
	}
	_putchar('\n');
}
