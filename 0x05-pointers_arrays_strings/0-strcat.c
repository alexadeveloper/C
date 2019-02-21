#include "holberton.h"
/**
  *_strcat -concatenar strings
  *@dest: char destino
  *@src: char source
  *Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;
	
	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		k = i + j;
		dest[k] = src[j];
	}
	dest[i + j] = '\0';
return (dest);
}
