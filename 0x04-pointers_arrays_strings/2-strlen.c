#include "holberton.h"
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
