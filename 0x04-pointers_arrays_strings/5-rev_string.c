#include "holberton.h"
#include<stdio.h>

/**
  *rev_string -reverse a string
  *@s: is a char
 */
void rev_string(char *s)
{
	int j, i, k;
	char dest[1000];

	for (i = 0; s[i] != '\0'; i++)
	{
		dest[i] = s[i];
	}
	k = 0;
	for (j = (i - 1); j >= 0; j--)
	{
		s[k] = dest[j];
		k++;
	}
}
