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
  *_strdup-  copy a string
  *@str: the initial string
  *Return: null if size is 0 or it fail
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *copy;

	if (str == NULL)
	{
	return (NULL);
	}
	j = _strlen(str);
	if (j == 0)
	{
	return (NULL);
	}
	copy = malloc(sizeof(char) * j);
	if (copy == NULL)
	{
	return (NULL);
	}
	for (i = 0; i <= j; i++)
	{
		copy[i] = str[i];
	}
return (copy);
}
