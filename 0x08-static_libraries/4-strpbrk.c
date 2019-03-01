#include "holberton.h"

/**
  *_strpbrk - gets the lenght
  *@s: is an array
  *@accept: is an array
  *Return: the num accept into s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != s[i] && accept[j])
		{
			j++;
		}
		if (s[i] == accept[j])
		{
			return (s + i);
		}
	}
return (NULL);
}
