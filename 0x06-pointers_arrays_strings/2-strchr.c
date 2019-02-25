#include "holberton.h"

/**
  *_strchr - locates a character in a string
  *@s: is an array
  *@c: is an array
  *Return: the new bytes memory
 */

char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		s++;
		if (s[j] == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
return (0);
}
