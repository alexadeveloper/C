#include "holberton.h"

/**
  *string_toupper -changes all lowercase letters
  *@s: is a array
  *Return: an pointer
 */

char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			j = s[i] - 32;
			s[i] = j;
		}
	}
return (s);
}
