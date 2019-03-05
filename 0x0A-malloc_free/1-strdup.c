#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *_strdup-  copy a string
  *@str: the initial string
  *Return: null if size is 0 or it fail
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *copy;

	if (str == NULL)
	{
	return (NULL);
	}
	size = strlen(str);
	copy = malloc(sizeof(char) * size);
	if (copy == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
return (copy);
}
