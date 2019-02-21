#include "holberton.h"
#include <stdio.h>
/**
  *cap_string -capitalize all words of a string
  *@s: is a array
  *Return: an pointer
 */

char *cap_string(char *s)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || s[i] == '\t' || s[i] == '\n' || s[i] == ' ' || s[i] == '.')
		{
			if (i == 0)
			{
				k = i;
			}
			else
			{
				k = i + 1;
			}
			if (s[k] >= 97 && s[k] <= 122)
			{
				j = s[k] - 32;
				s[k] = j;
			}
		}
	}
return (s);
}
