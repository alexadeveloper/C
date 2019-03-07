#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>

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
  *string_nconcat- concatenates two string
  *@s1: the first string
  *@s2: the second string
  *@n: the limit of the second
  *Return: Value 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j, k;
	char *cadena;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n >= size2)
	{
		n = size2;
	}
	cadena = malloc(sizeof(char) * (size1 + n + 1));
	if (cadena == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < size1; i++)
	{
		cadena[k] = s1[i];
		k++;
	}
	for (j = 0; j < n; j++)
	{
		cadena[k] = s2[j];
		k++;
	}
	cadena[k] = '\0';
return (cadena);
}
