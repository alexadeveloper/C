#include "holberton.h"

/**
  *_memset - fills the first n byter with int
  *@s: is an array
  *@b: is a char
  *@n: is a int
  *Return: the new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
