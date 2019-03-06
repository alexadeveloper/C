#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_strlen - returns the length of a string
  *@s: is a char
  *Return: the length of a string
 */
int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
return (cont);
}
/**
  *argstostr- args to string
  *@ac: cantidad de argumentos
  *@av: argumentos pasados
  *Return: null if it fail
 */

char *argstostr(int ac, char **av)
{
	unsigned int i, j, k, l, size, largo;
	char *str, *cad;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	largo = 0;
	for (i = 1; av[i] != '\0'; i++)
	{
		size = _strlen(av[i]);
		largo = largo + size;
	}
	str = malloc(sizeof(char) * (largo + 1));
	if (str == NULL)
	{
	return (NULL);
	}
	j = 0;
	while (j < largo)
	{
		for (k = 1; k < i; k++)
		{
			size = _strlen(av[k]);
			cad = av[k];
			for (l = 0; l < size; l++)
			{
				str[j] = cad[l];
				j++;
			}
			str[j] = '\n';
			j++;
		}
	}
return (str);
}
