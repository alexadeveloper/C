#include "holberton.h"

/**
  *_strchr - locates a character in a string
  *@s: is an array
  *@c: is an array
  *Return: the new bytes memory
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == 0)
	{
		return (s + i);
	}
return (NULL);
}
