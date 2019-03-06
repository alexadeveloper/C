#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *argstostr- args to string
  *@ac: cantidad de argumentos
  *@av: argumentos pasados
  *Return: null if it fail
 */

char *argstostr(int ac, char **av)
{
	unsigned int i;
	char *str;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	str = malloc(sizeof(char) * (ac));
	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 1; av[i] != '\0'; i++)
	{
		printf("%s\n", av[i]);
	}
return (str);
}
