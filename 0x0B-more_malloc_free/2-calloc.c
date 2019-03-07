#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: is size of array
 *@size: size of type
 *Return: null it is fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cadena;

	if (nmemb == 0)
	{
	return (NULL);
	}
	if (size == 0)
	{
	return (NULL);
	}
	cadena = malloc(size * nmemb);
	if (cadena == NULL)
	{
		return (NULL);
	}
return (cadena);
}
