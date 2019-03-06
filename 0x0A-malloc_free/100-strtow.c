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
  *strtow- split a string into words
  *@str: the string
  *Return: null if it fail
 */

char **strtow(char *str)
{
	char **words;

	if (str == '\0' || str == NULL)
	{
	return (NULL);
	}
	words = malloc(sizeof(char *) * 6);
	if (words == NULL)
	{
	return (NULL);
	}
return (words);
}
