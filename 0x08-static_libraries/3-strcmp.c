#include "holberton.h"

/**
  *_strcmp -compare strings
  *@s1: char one
  *@s2: char two
  *Return: a int
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k, tam, dif;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (i > j)
	{
		tam = j;
	}
	else
	{
		tam = i;
	}
	dif = 0;
	for (k = 0; k <= tam; k++)
	{
		if (s1[k] != s2[k])
		{
			dif = s1[k] - s2[k];
			return (dif);
		}
	}
return (0);
}
