#include "holberton.h"

/**
  *_strncpy -concatenar strings
  *@dest: char destino
  *@src: char source
  *@n: int size
  *Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[i + j] = src[j];
		}
	}
	for (k = (j - 1); k < n; k++)
	{
		dest[k] = '\0';
	}
return (dest);
}
