#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>

/**
 *_realloc - reallocates memory block
 *@ptr: is the text
 *@old_size: int
 *@new_size: int
 *Return: null it is fail
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str, *copia;
	unsigned int tam, i;

	if (new_size == old_size)
	{
	return (ptr);
	}
	if (ptr == NULL)
	{
	return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	return (NULL);
	}
	str = malloc(sizeof(char) * new_size);
	if (str == NULL)
	{
	return (0);
	}
	copia = ptr;
	if (new_size > old_size)
	{
		tam = old_size;
	}
	else
	{
		tam = new_size;
	}
	for (i = 0; i < tam; i++)
	{
		*(str + i) = copia[i];
	}
	free(ptr);
return (str);
}
