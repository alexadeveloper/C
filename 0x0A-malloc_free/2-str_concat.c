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
 *str_concat- concat two strings
  *@s1: the initial string
  *@s2: the second string
  *Return: null if it fail
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, t, size, size2;
	char *copy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = _strlen(s1);
	size2 = _strlen(s2);
	copy = malloc(sizeof(char) * (size + size2 + 1));
	if (copy == NULL)
	{
	return (NULL);
	}
	t = 0;
	for (i = 0; i < size; i++)
	{
		copy[t] = s1[i];
		t++;
	}
	for (j = 0; j <= size2; j++)
	{
		copy[t] = s2[j];
		t++;
	}
return (copy);
}
