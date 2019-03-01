#include "holberton.h"

/**
  *_strcpy -copy a string
  *@dest: is a char
  *@src: is a char
  *Return: the string copied
 */
char *_strcpy(char *dest, char *src)
{
	int j, i;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
return (dest);
}
