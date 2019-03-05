#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	size = strlen(s1);
	size2 = strlen(s2);
	copy = malloc(sizeof(char) * (size + size2));
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
	for (j = 0; j < size2; j++)
	{
		copy[t] = s2[j];
		t++;
	}
return (copy);
}
