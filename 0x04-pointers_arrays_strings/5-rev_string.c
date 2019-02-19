#include "holberton.h"

/**
  *rev_string -print reverse a string
  *@s: is a char
 */

void rev_string(char *s)
{
	int cont, i, j;
	int *letra;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	j = 0;
	for (i = (cont - 1); i >= 0; i--)
	{
		j++;
		letra[j] = s[i];
	}
}
