#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *create_array-  create a array of chars
  *@size: size of array
  *@c: the initial char
  *Return: null if size is 0 or it fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
return (str);
}
